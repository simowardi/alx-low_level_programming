#include <stdio.h>
#include <main.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: size of argv
 * @argv: array of arguments
 *
 * Return: 0 Always (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
