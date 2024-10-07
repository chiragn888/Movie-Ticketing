
import pytest
from flask import template_rendered
from contextlib import contextmanager
from app.main import create_app

@pytest.fixture
def app():
    app = create_app()
    app.config.update({
        "TESTING": True,
    })
    yield app

@pytest.fixture
def client(app):
    return app.test_client()

@contextmanager
def captured_templates(app):
    recorded = []

    def record(sender, template, context, **extra):
        recorded.append((template, context))

    template_rendered.connect(record, app)
    try:
        yield recorded
    finally:
        template_rendered.disconnect(record, app)

def test_home_page(client):
    """Test that the home page loads correctly."""
    response = client.get('/')
    assert response.status_code == 200
    assert b"Welcome" in response.data

def test_404_page(client):
    """Test that a 404 page loads correctly."""
    response = client.get('/nonexistentpage')
    assert response.status_code == 404

def test_home_page_content(client, app):
    """Test the content of the home page."""
    with captured_templates(app) as templates:
        response = client.get('/')
        assert len(templates) == 1
        template, context = templates[0]
        assert template.name == "home.html"
        assert 'Welcome' in response.data.decode('utf-8')

def test_static_files(client):
    """Test that static files are served."""
    response = client.get('/static/styles.css')
    assert response.status_code == 200
    assert "text/css" in response.content_type