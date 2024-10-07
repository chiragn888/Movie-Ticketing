
This file acts as the project's URL dispatcher. It defines the URLs for the API endpoints or web pages the project serves.
Initially, it includes the admin site and API URLs. Utilizes the include function from django.urls to forward requests
with specific URL patterns to another module (e.g., app-level urls.py). Structured in a way that's scalable, allowing
easy expansion as new features are added.
"""

from django.contrib import admin
from django.urls import path, include

urlpatterns = [
    path('admin/', admin.site.urls),
    # Example of how to include app-level urls
    path('api/', include('project-mvp.api_urls')),
]