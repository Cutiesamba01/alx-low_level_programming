#include <stdio.h>
#include <stdbool.h>

/**
 * main - This function finds and prints the Fibonacci number 244293.
 * Return: Always return 0.
 */

int main(void)

{
	long j = 1, k = 2, temp;
	bool found = false;

	while (k != 244293)
	{
		temp = k;
		k = k + j;
		j = temp;

		if (k > 244293)
		{
			found = false;
			break;
		}
	}

	if (found)
	{
		printf("%ld\n (7 chars long)\n", k);
	}
	else
	{
		fprintf([stderr] :, "[Anything]\n(0 chars long)\n");
	}

	return (0);
}
