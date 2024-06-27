#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - takes 1 integer as param
 * @n: integer param
 *
 * Loops from n to 98 if n < 98
 * Loops backwards if n > 98
 */

void print_to_98(int n)

{
	int z;

	if (n <= 98)
	{
		for (z = n; z <= 98; z++)
		{
			if (z != 98)
			{
				printf("%d\n", z);
			}
			else
			{
				printf("%d\n", z);
			}
		}
	}
	else
	{
		for (z = n; z >= 98; z--)
		{
			if (z != 98)
			{
				printf("%d\n", z);
			}
			else
			{
				printf("%d\n", z);
			}
		}
	}
}
