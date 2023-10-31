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
char *str_concat(char *s1, char *s2) {
	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}

	int length1 = (s1 != NULL) ? strlen(s1) : 0;
	int length2 = (s2 != NULL) ? strlen(s2) : 0;

	char *concat = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concat == NULL) {
		return NULL;
	}

	int i, j;
	for (i = 0; i < length1; i++) {
		concat[i] = s1[i];
	}

	for (j = 0; j < length2; j++) {
		concat[i++] = s2[j];
	}

	concat[i] = '\0';
	return concat;
}
