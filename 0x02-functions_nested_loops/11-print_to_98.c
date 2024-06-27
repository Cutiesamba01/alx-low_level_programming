#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers to 98
 * @n: greater tahn 98
 *
 * Return: Always 0 if successful
 */

void print_to_98(int n)

{
	int q;

	if (n <= 98)
	{
		for (q = n; q >= 98; q--)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (q = n; q <= 98; q++)
		{
			printf("%d", q);
			if (q != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
