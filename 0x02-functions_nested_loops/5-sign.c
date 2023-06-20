#include "main.h"

/**
 * print_sign - This function prints the sign of the given
 * input character...
 *
 * @n: character to be checked
 * Return: 1 if n is positive
 * 0 if n is equal to zero
 * and -1 if n is negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
