#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - add new node to the beginning of the list
 * @head: head of a linked list
 * @n: integer
 * Return: the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

