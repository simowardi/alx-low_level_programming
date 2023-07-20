#include <variadic_functions.h>

/**
 *main - function that returns the sum of all its parameters
 *
 *
 *Return: Always 0
 */

int sum_them_all(const unsigned int n, ...);
{
	unsigned int num
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (num = 0; num < n; num++)
		sum += va_arg(list, sum);

	va_end(list);

	return (sum);
}
