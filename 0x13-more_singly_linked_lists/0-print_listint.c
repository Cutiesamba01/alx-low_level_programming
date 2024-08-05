#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints ll the element of a list
 * @t: pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *t)

{
	size_t i = 0;

	for (; t != NULL; i++)
	{
		printf("%d\n", t->r);
		t = t->next;
	}
	return (i);
}
