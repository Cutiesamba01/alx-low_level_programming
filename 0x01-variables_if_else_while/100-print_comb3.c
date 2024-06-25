#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	int o;
	int h;

	for (o = 10; o <= 19; o++)
	{
		for (h = 10; h <= 19; h++)
		{
			if ((h % 10) > (o % 10))
			{
				putchar((o % 10) + '0');
				putchar((h % 10) + '0');

			if (o != 18 || h != 19)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}

	putchar('\n');

	return (0);
}
