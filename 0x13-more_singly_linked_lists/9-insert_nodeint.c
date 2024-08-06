#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node to the listint_t list
 *				at a given position
 * @head: head of the listint_t list
 * @index: index of the listint_t list where the new node should be added,
 *			indices start at 0
 * @n: integer for the new node to contain
 *
 * Return: NULL if the function fails. Otherwise, the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)

{
	listint_t *new, *copy = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
