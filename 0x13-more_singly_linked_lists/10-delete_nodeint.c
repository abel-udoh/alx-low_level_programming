#include "lists.h"
#include <stdio.h>


/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: header of a linked list
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	unsigned int i;
	listint_t *current;
	listint_t *prev;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;
	prev = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	i = 0;

	while (current->next != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == index)
	{
		prev->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}

