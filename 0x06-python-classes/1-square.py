#!/usr/bin/python3

"""
    Module 1-square
    It defines a square by private instance attribute
"""


class Square:
    """A class that defines a square"""


def __init__(self, size):
    """__init__ method for square
    Args:
    size init - size of square
    """
    self.__size == size


if __name__ == '__main__':
    my_square = Square(3)
print(type(my_square))
print(my_square.__dict__)


try:
    print(my_square.size)
except Exception as e:
    print(e)


try:
    print(my_square.__size)
except Exception as e:
    print(e)
