#!/usr/bin/python3

"""
A module with no class or object attribute, that prevents the user from
dynamically creating new instance attributes
"""


class LockedClass():
    """A class that prevents the user from dynamically
    creating new instance attributes
    """
    __slot__ = "first_name"
