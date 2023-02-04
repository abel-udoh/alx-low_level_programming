#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)

{
	unsigned long int x;

	if (n == 0)
	{
		_putchar(0);
	}
	else
	{
		x = n & 1;
		n = n >> 1;
		if (!(n == 0))
			print_binary(n);
		_putchar(x + '0');
	}
}

