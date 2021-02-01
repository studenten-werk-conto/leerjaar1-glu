from django.shortcuts import render, redirect, get_object_or_404
from django.shortcuts import render
from .models import werken

def home(request): 
    werken = werken.objects 
    return render(request, 'werken/werken.html', {'werken': werken})

def detail(request, werken_id):
    werk = get_object_or_404(werken, pk=werken_id)
    return render(request, 'werken/detail.html', {'werk': werk})


