
from flask import Flask, render_template, request, redirect, url_for
import os

# Initialize the Flask application
app = Flask(__name__)

# Define the basic routes

@app.route('/')
def index():
    """
    Route for the home page. Renders the home template.
    """
    return render_template('home.html')

@app.route('/about')
def about():
    """
    Route for the about page. Renders the about template.
    """
    return render_template('about.html')

@app.route('/contact', methods=['GET', 'POST'])
def contact():
    """
    Route for the contact page. Supports GET to display the contact form and POST to process the form.
    """
    if request.method == 'POST':
        # For demonstration, redirect to home after POST
        return redirect(url_for('index'))
    return render_template('contact.html')

@app.errorhandler(404)
def page_not_found(error):
    """
    Custom 404 error handler. Renders a 404 error page template.
    """
    return render_template('404.html'), 404

# Check if the executed file is the main program and run the app
if __name__ == '__main__':
    app.run(debug=True)