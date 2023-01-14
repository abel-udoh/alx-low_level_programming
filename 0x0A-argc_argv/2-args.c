#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])

{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
