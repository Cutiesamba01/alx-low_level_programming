#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list listint_t
 * @t: pointer to the head of the linstint_t list
 *
 * Return: number of elements in the listint_t list
 */

size_t listint_len(const listint_t *t)

{
	size_t i = 0;

	for (; t != NULL; i++)
	{
		t = t->next;
	}
	return (i);
}
