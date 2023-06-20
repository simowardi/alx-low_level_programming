#include "main.h"

/**
 * _islower - A function that checks for lower case
 * @c: Character we are testing if its lower case
 * Return: 1 if c is lowercase
 * 0 if otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
