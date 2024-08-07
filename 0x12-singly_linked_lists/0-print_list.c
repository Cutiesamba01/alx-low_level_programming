#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements o a list_t list
 * @t: lists
 * Return: number of nodes
 */

size_t print_list(const list_t *t)

{
	size_t i = 0;

	if (t == NULL)
		return (0);

	for (; t != NULL; i++)
	{
		if (t->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", t->len, t->str);
		}
		t = t->next;
	}
	return (i);
}
