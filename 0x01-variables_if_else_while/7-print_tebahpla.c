#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');

	return (0);
}
