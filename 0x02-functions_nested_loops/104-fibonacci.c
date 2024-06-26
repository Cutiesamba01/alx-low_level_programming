#include <stdio.h>

/**
 * print_first_92_fib_numbers - Prints the first 92 Fibonacci numbers.
 */

void print_first_92_fib_numbers(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;

	}
}

/**
 * print_remaining_fib_numbers - Prints the remaing Fibonacci numbers
 */

void print_remaining_fib_numbers(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;


	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (fib1_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
}

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *1 and 2, seperated by a comma followed by a space.
 *
 * Return: Always 0 if successful
 */

int main(void)
{
	print_first_92_fib_numbers();
	print_remaining_fib_numbers();
	printf("\n");
	return (0);

}
