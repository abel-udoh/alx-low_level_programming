#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)

{
	unsigned int m, n, l;

	n = 1 = m = 0;

	if (b == NULL)
		return (0);

	while (b[l] != '\0')
	{
		if (b[l] == '0' || b[l] == '1')
			l++;
		else
			return (0);
	}
		while (n < 1)
		{
			m = m << 1;
			if (b[n] == '1')
				m += 1;
			n++;
		}
		return (m);
}

