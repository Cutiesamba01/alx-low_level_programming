#include <stdio.h>

/**
 * main - This is the main printing funtion
 * less than 4000000.
 * Return: Always 0
 */

int main(void)

{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			totl += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%ld ", total);
	return (0);
}
