#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: Always 0 if successful
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i s negative\n", n);
	else
		printf("%i is neutral\n", n);
	return (0);
}