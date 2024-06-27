#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * code body
 * Return: Always 0 if successful
 */

void print_alphabet_x10(void)
{
	unsigned short y;

	for (y = 1; y <= 10; y++)
	{
		unsigned short z;

		for (z = 97; z <= 122; z++)
		{
			_putchar(z);
		}
	_putchar('\n');
	}
}
