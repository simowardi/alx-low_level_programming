#include "search_algos.h"

/**
  * recursive_binary_search - Searches recursively for a value in a sorted
  * array of integers using the Binary search.
  *
  * @array: A pointer to the first element of the array to search .
  * @size: The number of elements in the array .
  * @value: Value to search for in the array .
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
***/
int recursive_binary_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
	{
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);
	}

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	/* return the mid value index */
	if (value == array[mid])
	{
		return ((int)mid);
	}
	/* return the left_result */
	if (value < array[mid])
	{
		return (recursive_binary_search(array, mid, value));
	}
	mid++;
	/* return the right result */
	return (recursive_binary_search(array + mid, size - mid, value) + mid);
}


/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
**/
int binary_search(int *array, size_t size, int value)
{
	int value_index;

	value_index = recursive_binary_search(array, size, value);

	if (value_index >= 0 && array[value_index] != value)
		return (-1);

	return (value_index);
}
