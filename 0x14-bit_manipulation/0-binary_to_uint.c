#include <stdlib.h>
#include "main.h"

int _putchar(char c);

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to binary number
 *
 * Return: the converted number or 0
 *		if there is an invalid character in the string
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
