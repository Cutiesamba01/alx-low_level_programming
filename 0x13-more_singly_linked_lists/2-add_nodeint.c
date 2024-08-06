#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of listint_t list
 * @head: pointer to the address of the listint_t list
 * @n: the integer allocated to the new node
 *
 * Return: NULL if the funtion fails. Otherwise, the address of the nw element
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
