#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a count at a given position.
 * @head: head of a linked list
 * @idx: index of the list
 * @n: integer of the inserted node
 * Return: address of the new count, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new, *cp = *head;
	unsigned int count;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cp;
		*head = new;
		return (new);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (cp == NULL || cp->next == NULL)
			return (NULL);

		cp = cp->next;
	}

	new->next = cp->next;
	cp->next = new;

	return (new);
}
