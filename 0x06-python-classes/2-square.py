#!/usr/bin/python3

"""
    Module 2-square
    It defines a private instance attribute
"""


class Square:



    """
    A square class

    """

    def __init__(self, size=0):


        """
        This initializes the instance / object with optional
        """
        if type(size) != int:
            raise TypeError("size must be an integer")

        elif size < 0:
            raise ValueError("size must be >= 0")

        else:
            self.__size = size
