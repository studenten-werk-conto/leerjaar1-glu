from django.db import models

from django.contrib.auth.models import User

# Create your models here.
class Werken(models.Model):
    title = models.CharField(max_length=200)
    body = models.TextField()    
    url = models.TextField()
    pub_date = models.DateTimeField()
    image = models.ImageField(upload_to='media/images/')
    icon = models.ImageField(upload_to='media/icon/')
    votes_total = models.IntegerField(default=1)
    hunter = models.ForeignKey(User, on_delete=models.CASCADE)

    def _str_(self):
        return self.title
    
    def summary(self):
        return self.body[:200]
    
    def pub_date_pretty(self):
        return self.pub_date.strftime('%b %e %Y')