#!/usr/bin/python3
"""
A module that contains function that returns the list of available attributes
"""

def lookup(obj):
    """function that returns the list of available attributes"""
    return dir(obj)
