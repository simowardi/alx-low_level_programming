#include "main.h"

/*
 * _strdup - duplicate a string
 * @str: the string to be duplicated
 *
 * Description: This function takes a string as input and creates a duplicate
 * of that string, allocating memory dynamically to store the duplicate.
 * The duplicated string is then returned.
 *
 * Return: Pointer to the duplicated string, or NULL if str is NULL or memory
 * allocation fails
 */
char *_strdup(char *str)
{
	char *dup; /* Pointer to store the duplicated string */
	int length, i;

	/* Check if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	length = 0;
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the duplicated string */
	dup = malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
		return (NULL);

	/* Copy the characters from str to dup */
	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}
