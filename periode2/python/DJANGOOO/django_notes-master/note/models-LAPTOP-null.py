from django.db import models

# Create your models here.
class noteItem(models.Model):
    content = models.TextField()
    title = models.TextField()
    color = models.TextField()