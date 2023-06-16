#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int t;

	for (t = '0'; t <= '9' ; t++)
	{
		putchar(t);

		if (t != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
