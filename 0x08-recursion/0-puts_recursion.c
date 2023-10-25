#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
	{
	putchar('\n'); /* Print a new line */
	return;
	}

	putchar(*s); /* Print the current character */
	_puts_recursion(s + 1);
}
