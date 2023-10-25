#include <math.h>

/**
 * is_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 *
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0); /* Numbers less than or equal to 1 are not prime*/
	}

	int i;
	int sqrt_n = sqrt(n);

	for (i = 2; i <= sqrt_n; i++)
	{
	if (n % i == 0)
	{
		return (0);
	}
	}
	return (1);
}
