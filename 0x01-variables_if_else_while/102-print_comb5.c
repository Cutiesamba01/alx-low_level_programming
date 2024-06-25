#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	int y;
	int z;

	for (y = 0; y <= 99; y++)
	{
		for (z = y + 1; z <= 99; z++)
		{
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			putchar(' ');
			putchar(z / 10 + '0');
			putchar(z % 10 + '0');

		if (!(y == 98 && z == 99))
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
