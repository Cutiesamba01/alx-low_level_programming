#include <stdio.h>

/**
 * main - This is the main printing funtion
 * less than 4000000.
 * Return: Always 0
 */

int main(void)

{
	long i = 1, j = 1, k = 2, sum = 2;

	while (k + j < 4000000)
	{
		k += j;
		if (k % 2 == 0)
		{
			sum += k;
		}
		i = j;
		j = k;
	}
	printf("%ld ", sum);
	return (0);
}
