#include <main.h>

/*
 * main : converts a binary number to an unsigned int
 *
 * @binary :the binary number as a string
 *
 * return: 0
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int num = 0;

	if (!binary)
		return (0);
	while (*binary)
	{
	if (*binary != "0" && *b != "1")
		return (0);
	num = num * 2 + (*b++ - "0");
	}
	return (num);
}
