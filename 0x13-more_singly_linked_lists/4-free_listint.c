#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: pointer to the head of the listint_t that is to be freed
 */

void free_listint(listint_t *head)

{
	listint_t *tmp;

		while (head)
		{
			tmp = head->next;
			free(head);
			head = tmp;
		}
}
