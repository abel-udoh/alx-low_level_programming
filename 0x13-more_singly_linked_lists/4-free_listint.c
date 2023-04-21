#include "lists.h"
#include <stdio.h>

/**
 * free_listint - free a listint list
 * @head: head of a linked list
 * Return: void
 */
void free_listint(listint_t *head)

{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}

