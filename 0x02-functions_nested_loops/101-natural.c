#include <stdio.h>
#include "main.h"

/**
 * main - Prints multiples of 3 of 5 less than 1024
 * Return: Always return 0.
 */

int main(void)

{
	int i, sum;

	sum = 0;
	for (i = 0; i <= 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
