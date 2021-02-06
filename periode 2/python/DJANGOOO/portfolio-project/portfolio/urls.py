
import views 
from django.contrib import admin
from django.urls import path,include
from django.conf import settings
import werken.views
import views
from django.shortcuts import render

def home(request):
    return render(request, 'index.html')

urlpatterns = [
   path('admin/', admin.site.urls),
   path('<int:werken_id>', views.detail,name='detail'),
# path('', views.home name='home'),
    path('', werken.views.home, name='home'),
    path('werken/', include('werken.urls')),
    path('deletenote/<int:note_id>', deletenote),
] +static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
