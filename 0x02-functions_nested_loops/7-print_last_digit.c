#include "main.h"

/**
 * print_last_digit - entry point
 * @o: number to compute the last digit
 *
 * Return: last digit
 */

int print_last_digit(int o)
{
	int last_digit;

	last_digit = o % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
