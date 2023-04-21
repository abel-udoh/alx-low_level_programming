#include "main.h"
#include <stdio.h>

/**
 * create_array - create and a rray of char
 * @size: size of array
 * @c: A char to initialize array
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
