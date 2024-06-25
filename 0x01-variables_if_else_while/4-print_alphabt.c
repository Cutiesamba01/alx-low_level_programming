#include <stdio.h>

/**
 * main - entry point
 * body of code
 * Return: Always 0 if successful
 */

int main(void)

{
	char r;

	for (r = 'a'; r <= 'z'; r++)

	{
		if (r == 'q' || r == 'e')
			continue;
		putchar(r);
	}
	putchar('\n');

	return (0);

}
