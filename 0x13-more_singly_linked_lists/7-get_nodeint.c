#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of the listint_t list
 * @head: hed of the listint_t list
 * @index: index of the node to be located, indices start at 0
 *
 * Return: NULL if the node does not exist. Otherwise, the node located
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
