#include "main.h"
#include <stdio.h>

/**
 * flip_bits - returns the number of bits
 * @n: integer 1
 * @m: integer 2
 * Return: number of bits to change (integer)
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int sum;
	unsigned long int xor;

	sum = 0;
	xor = n ^ m;
	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}
	return (sum);
}
