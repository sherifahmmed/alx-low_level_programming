#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len+ 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; index < len; index++)
			concat[len++] = s1[index];
	for (index = 0; index < len; index++)
			concat[len++] = s2[index];

	return (concat);
}
