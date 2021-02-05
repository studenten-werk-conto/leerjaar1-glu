from django.contrib import admin
from django.urls import path, include
from . import views
from django.conf import settings
from django.conf.urls.static import static
import werken.views
# from django.urls import path, include
# from . import views

urlpatterns = [
    path('accounts/', include('django.contrib.auth.urls')),
    path('accounts/', include('accounts.urls')),
    path('admin/', admin.site.urls),
    path('', werken.views.home, name='home'),
    path('werken/', include('werken.urls')),
] + static(settings.MEDIA_URLS, document_root=settings.MEDIA_ROOT)