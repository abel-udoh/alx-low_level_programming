#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
gcc -c *.c
ar rcs liball.a *.o
