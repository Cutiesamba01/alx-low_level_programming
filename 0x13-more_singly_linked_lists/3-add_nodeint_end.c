#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the listint_t list
 * @head: pointer to the address of the head of the listint_t list
 * @n: integer allocated to the new node
 *
 * Return: NULL if the function fails. Otherwise, addres of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = temp;
	}
	return (*head);
}
