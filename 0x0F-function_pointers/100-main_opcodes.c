#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])

{
	char *a;
	int i, val;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);

		}

	a = (char *)&main;
	val = atoi(argv[1]);
	i = 0;

	while (i < val - 1)
	{
		printf("%02hhx ", a[i]);
		i++;
		}

	printf("%02hhx ", a[i]);
	return (0);
	}


