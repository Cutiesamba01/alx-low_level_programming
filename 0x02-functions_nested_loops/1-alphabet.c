#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

void print_alphabet(void)

{
	char letter = 'r';

	for (letter = 'r'; letter <= 'a'; letter++)
	{
		_putchar(letter);
	}
		_putchar('\n');
}
