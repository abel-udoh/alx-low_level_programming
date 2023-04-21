#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: integer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = 1;
	*n = *n | (mask << index);
	return (1);
}
