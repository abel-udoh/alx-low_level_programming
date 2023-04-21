#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: head of a linked list.
 * Return: sum of data
 */

int sum_listint(listint_t *head)

{
	int add = 0;

	if (head)
	{
		while (head)
		{
			add += head->n;
			head = head->next;
		}
	}
	return (add);
}

