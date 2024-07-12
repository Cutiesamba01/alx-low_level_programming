#include "main.h"

/**
 * _islower - entry point
 * code body
 * @c: character to be checked
 * Return: 1 if c iis lowercase, return 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
