#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @t: list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *t)

{
	size_t i = 0;

	if (t == NULL)
		return (0);

	for (; t != NULL; i++)
	{
		t = t->next;
	}
	return (i);
}
