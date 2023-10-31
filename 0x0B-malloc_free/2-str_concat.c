#include "main.h"

/**
 * str_concat - concatenate two strings
 *@s1: the first string
 *@s2: the second string
 *
 *Description: This function takes two strings as input and concatenates them
 *
 *Return: Pointer to the concatenated string, or NULL if s1 or s2 is NULL or
 * memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int length1 = 0, length2 = 0, i, j;

	/* Check if s1 and s2 are NULL */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* Calculate the lengths of s1 and s2 */
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	/* Allocate memory for the concatenated string */
	concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to concat */
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	/* Copy s2 to concat */
	for (j = 0; j < length2; j++, i++)
		concat[i] = s2[j];

	/* Add null terminator at the end */
	concat[i] = '\0';

	return (concat);
}
