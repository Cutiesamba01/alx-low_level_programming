#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - entry point
 * code body
 * Return: Always 0 if successful
 */

void print_alphabet(void)

{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
}
