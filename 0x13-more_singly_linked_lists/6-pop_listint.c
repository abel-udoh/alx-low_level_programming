#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - function that deletes the head node of a listint_t linked list
 * @head: head of a linked list
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int n;

	temp = *head;
	n = 0;
	if (*head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}

