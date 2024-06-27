#include "main.h"

/**
* print_times_table - Print the `n` times table, starting with 0.
* Description: If `n` is greater than 15 or less than 0, print nothing.
* @r: int type number
*/

void print_times_table(int r)

{
	int a = 0, b, c;

	if (r > 15 || r < 0)
		return;
	while (a <= r)
	{
		for (b = 0; b <= r; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
				_putchar(c + '0');

			if (b != r)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
