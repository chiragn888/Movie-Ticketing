
This file is dedicated to defining URL patterns specifically for API endpoints using Django REST Framework's router.
"""

from django.urls import path, include
from rest_framework.routers import DefaultRouter
from . import views

# Create a router and register our viewsets with it.
router = DefaultRouter()

# Updated to register the appropriate viewsets according to the project and task models in `project-mvp/views.py`.
router.register(r'projects', views.ProjectViewSet, basename='project')
router.register(r'tasks', views.TaskViewSet, basename='task')

# The API URLs are now determined automatically by the router.
urlpatterns = [
    path('', include(router.urls)),
]