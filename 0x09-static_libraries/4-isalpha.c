#include "main.h"

/**
 * _isalpha - Function to check if given character
 * is an alphabet
 *
 * @c: character to be checked
 * Return: 1 if given char is alphabet
 * and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	return (0);
}
