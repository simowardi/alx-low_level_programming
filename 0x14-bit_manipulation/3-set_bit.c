#include "main.h"

/**
 * set_bit - set the bits at the index
 * @n: the number of index
 * @index: the bit to set
 *
 * Return: 1 if successful , -1on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1l << index));
}
