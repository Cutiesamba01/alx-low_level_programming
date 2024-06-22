#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 if successful
 */

int main(void);
{
	    printf("Size of char: %zu byte(s)\n", sizeof(char));
	    printf("Size of int: %zu byte(s)\n", sizeof(int));
	    printf("Size of short: %zu byte(s)\n", sizeof(short));
	    printf("Size of long: %zu byte(s)\n", sizeof(long));
	    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
	    printf("Size of float: %zu byte(s)\n", sizeof(float));
	    printf("Size of double: %zu byte(s)\n", sizeof(double));
	    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
	    printf("Size of int*: %zu byte(s)\n", sizeof(int *));
	    printf("Size of char*: %zu byte(s)\n", sizeof(char *));
	    printf("Size of void*: %zu byte(s)\n", sizeof(void *));
	    printf("Size of size_t: %zu byte(s)\n", sizeof(size_t));
	return (0);
}
