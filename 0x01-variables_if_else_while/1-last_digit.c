#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  * main - entry point
 *   *
 *    * Description: print last digit
 *     *
 *      * Return: 0 (success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit of %d is %d and is grater then 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d id %d and is less then 6 and not 0\n", n, ld);
	}
	return (0);
}
