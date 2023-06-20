#include "main.h"

/**
 * print_alphabet - The entry point to a program that
 * prints all lower case letters
 * using the _putchar function
 *
 * Return: always 0(success)
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
