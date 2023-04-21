#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements in the list
 * @h: head of linked list
 * Return: number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
