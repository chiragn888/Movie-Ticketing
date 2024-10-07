
from rest_framework import serializers
from .models import Project, Task

class ProjectSerializer(serializers.ModelSerializer):
    """
    Serializer for Project model.
    """
    class Meta:
        model = Project
        fields = ['id', 'title', 'description', 'created_at', 'updated_at', 'owner']
        read_only_fields = ('created_at', 'updated_at')

class TaskSerializer(serializers.ModelSerializer):
    """
    Serializer for Task model.
    """
    class Meta:
        model = Task
        fields = ['id', 'title', 'description', 'completed', 'project', 'created_at', 'updated_at']
        read_only_fields = ('created_at', 'updated_at')