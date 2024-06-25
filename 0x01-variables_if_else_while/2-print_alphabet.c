#include <stdio.h>

/**
 * main - entry point
 * the alphabet game code
 * Return: Always return 0
 */

int main(void)
{
	char r;

	for (r = 'a'; r <= 'z' || r <= 'Z'; r++)

	{
		putchar(r);
		if (r == 'Z')
		r = 'A' - 1;
	}

	putchar('\n');

	return (0);
}

