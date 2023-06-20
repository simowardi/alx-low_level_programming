#include "main.h"

/**
 * print_alphabet_x10 - The entry point to a program
 * that print lowercase letters ten times
 * using the _putchar function
 *
 * Return: always 0(success)
 */

void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
