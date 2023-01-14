#!/bin/bash
ar -rc liball.a *.o
gcc -c *.c
ar rcs liball.a *.o
