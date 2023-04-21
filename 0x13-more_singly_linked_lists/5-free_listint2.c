#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - free a listint list
 * @head: head of a linked list
 * Return: void
 */

void free_listint2(listint_t **head)

{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
