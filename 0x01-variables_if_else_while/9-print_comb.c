#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	int h;

	for (h = 10; h < 20; h++)
	{
		putchar((h % 10) + '0');
	if (h != 19)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}

