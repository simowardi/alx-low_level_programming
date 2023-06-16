#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point generate a random number and
 * print if positie or negative 
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* youre code here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if
		printf("%d is zero\n" n);
	return (0);
}
