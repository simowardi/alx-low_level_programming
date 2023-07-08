#include <stdio.h>
#include <main.h>

/**
 * main - prints arguments passed
 *
 * @argc: size of argv
 * @argv: array of commandline arguments
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);

	return (0);
}
