#include "main.h"

/**
 * times_table - times table function
 * First loop(a): will iterate from 0 to 9
 * Second loop(b): will iterate from 0 to 9
 */

void times_table(void)

{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int prod = b * 1;

				if (b == 0)
				{
					_putchar('0');
				}
				else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
		}
		_putchar('\n');
	}
}
