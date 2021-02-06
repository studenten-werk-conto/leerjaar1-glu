from . import views
from django.urls import path, include

# https://stackoverflow.com/questions/47065438/attributeerror-module-django-contrib-auth-views-has-no-attribute
from django.contrib.auth import views as auth_views
# FIXIT TODO

urlspatterns = [
    path('<int:werken_id>', views.detail, name='detail'),
    path('create', views.create, name='create'),
]
