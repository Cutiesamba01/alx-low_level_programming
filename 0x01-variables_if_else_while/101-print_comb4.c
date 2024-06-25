#include <stdio.h>

/**
 * main - entry point
 * code body
 * Return: Always 0 if successful
 */

int main(void)

{
	int f;
	int u;
	int n;

	for (f = 0; f <= 9; f++)
	{
		for (u = 0; u <= 9; u++)
		{
			for (n = 0; n <= 9; n++)
			{
				if (n > u && u > f)
				{
					putchar(f + '0');
					putchar(u + '0');
					putchar(n + '0');

				if (f != 7 || u != 8 || n != 9)
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
