#include "main.h"

/*
 * create_array - create an array of chars and fill it
 * @size: memory size of arr
 * @c: the charcter of the array
 * Description create array of size size and assign char c
 * Returns:pointer to array, NULL if size = 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	i = 0;

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
