
from django.views.generic import ListView, DetailView, CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy
from .models import Project, Task

class ProjectListView(ListView):
    model = Project
    context_object_name = 'projects'
    template_name = 'project/list.html'

class ProjectDetailView(DetailView):
    model = Project
    context_object_name = 'project'
    template_name = 'project/detail.html'

class ProjectCreateView(CreateView):
    model = Project
    fields = ['title', 'description', 'owner']
    template_name = 'project/form.html'
    success_url = reverse_lazy('project-list')

class ProjectUpdateView(UpdateView):
    model = Project
    fields = ['title', 'description', 'owner']
    context_object_name = 'project'
    template_name = 'project/form.html'
    success_url = reverse_lazy('project-list')

class ProjectDeleteView(DeleteView):
    model = Project
    context_object_name = 'project'
    template_name = 'project/confirm_delete.html'
    success_url = reverse_lazy('project-list')

class TaskListView(ListView):
    model = Task
    context_object_name = 'tasks'
    template_name = 'task/list.html'

class TaskDetailView(DetailView):
    model = Task
    context_object_name = 'task'
    template_name = 'task/detail.html'

class TaskCreateView(CreateView):
    model = Task
    fields = ['title', 'description', 'completed', 'project']
    template_name = 'task/form.html'
    success_url = reverse_lazy('task-list')

class TaskUpdateView(UpdateView):
    model = Task
    fields = ['title', 'description', 'completed', 'project']
    context_object_name = 'task'
    template_name = 'task/form.html'
    success_url = reverse_lazy('task-list')

class TaskDeleteView(DeleteView):
    model = Task
    context_object_name = 'task'
    template_name = 'task/confirm_delete.html'
    success_url = reverse_lazy('task-list')