#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: number to print
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
