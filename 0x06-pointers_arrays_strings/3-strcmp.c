#include "main.h"

/**
 * _strcmp - compare pointers to the two strings
 * @s1: A pointer to the first string to be compared
 * @s2: A pointer to the second string to be compared
 *
 * return: if s1 < s2, the negative difference of the first unmatched char
 *	if s1 == s2, 0
 *	if s1 < s2, the positive difference of the first unmatched char
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
