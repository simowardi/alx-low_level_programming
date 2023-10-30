#include "main.h"

/**
 *create_array - create an array of chars and fill it
 *@size: memory size of arr
 *@c:
 *Returns:pointer to array, NULL if size = 0
 *
**/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return NULL;

	while (i < size && i = 0)
	{
		arr[i] = c;
		i++
	}
	return (arr);
}
