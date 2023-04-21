#!/usr/bin/python3

"""A module that defines a class with inherited list"""


class MyList:
    """THis class inherit the default list class"""

    def print_sorted(self):
        """Print a list in sorted ascending order."""
        print(sorted(self))
