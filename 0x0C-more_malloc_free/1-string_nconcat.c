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
	unsigned int len1 = 0, len2 = 0, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + n) + 1);

	if (concat == NULL)
		return (NULL);


	for (index = 0; index < (len1 + n); index++)
	{
		if (index < len1)
			concat[index] = s1[index];
		else
			concate[index] = s2[index - len1];
	}

	concate[index] = '\0';

	return (concat);
}
