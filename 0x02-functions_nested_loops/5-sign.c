#include "main.h"

/**
 * print_sign - entry point
 * @r: the number value
 * Return: 1 and prints + if n is greater than zero
 */

int print_sign(int r)

{
	if (r > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (r < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
