from django.shortcuts import render
from django.http import HttpResponseRedirect
from .models import noteItem


def noteView(request ):
    all_items = noteItem.objects.all()
    return render( request, 'note.html',
    {'all_items': all_items}
    )



def addnote(request):
 
   new_item = noteItem(content = request.POST['content'], title = request.POST['title'] , color = request.POST['color'])
   new_item.save()

   return HttpResponseRedirect('/')


def deletenote(request, note_id):
   id = noteItem.objects.get(id=note_id)
   id.delete() 

   return HttpResponseRedirect('/')
# Create your views here.
