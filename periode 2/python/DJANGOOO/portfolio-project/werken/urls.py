from django.urls import path, include
from . import views

urlspatterns = [
    path('<int:werken_id>', views.detail, name='detail')
]
