#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)

{
	const listint_t *slow, *fast;
	size_t count = 0;

	slow = fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			printf("Linked list has a loop\n");
			exit(98);
		}
	}

	return (count);
}
