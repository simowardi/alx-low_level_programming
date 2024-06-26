#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array to search .
 * @size: The number of elements in the array .
 * @value: The value to search for .
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         else, the first index where the value is located .
 *
 * Description: Prints a value every time it is compared in the array .
**/


int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);

		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
