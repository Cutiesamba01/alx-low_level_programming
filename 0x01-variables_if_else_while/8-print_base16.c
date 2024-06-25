#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	unsigned char r = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(r);
		r++;
	}

	r = '1';

	for (i = 0; i < 6; i++)
	{
		putchar('0' + r);
		r++;
	}

	putchar('\n');

	return (0);
}

