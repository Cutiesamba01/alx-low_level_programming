#include "main.h"

/**
 * jack_bauer - entry point
 */

void jack_bauer(void)

{
	int r;
	int o;

	for (r = 0; r <= 23; r++)
	{
		for (o = 0; o <= 59; o++)
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
			_putchar(':');
			_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
			_putchar('\n');
		}
	}
}
