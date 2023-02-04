#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0
 * @n: integer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	mask = 1;
	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);

}
