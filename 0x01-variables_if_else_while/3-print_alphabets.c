#include <stdio.h>

/**
 * main - entry point
 * uppercase and lowercase code
 * Return: Always return 0
 */

int main(void)

{
	char r;

	for (r = 'a'; r <= 'z'; r++)
		putchar(r);
	for (r = 'A'; r <= 'Z'; r++)
		putchar(r);
	putchar('\n');

	return (0);
}
