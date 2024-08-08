#include "main.h"

/**
 * flip_bits - counts the number of bits needed to flip
 *		function that returns the number of bits needed to flip to
 *		get one number from another
 * @n: input
 * @m: bits
 *
 * Returns: digit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	for (i = 0; n != 0 || m != 0; i++)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}

		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
