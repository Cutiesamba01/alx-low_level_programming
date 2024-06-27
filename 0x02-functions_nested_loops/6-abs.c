#include <inttypes.h>
#include "main.h"

/**
 * _abs - Absolute value
 * @num: Prints an integer
 * Return: Always 0 if successful
 */

int _abs(int num)

{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
