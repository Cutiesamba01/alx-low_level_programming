#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: integer param
 *
 * Loops from n to 98 if n < 98
 * Loops backwards if n > 98
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
