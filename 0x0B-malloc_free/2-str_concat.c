#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, newlen, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	newlen = len1 + len2;

	con = malloc((newlen + 1) * sizeof(char));

	if (con == NULL)
		return (NULL);

	for (i = 0; i < newlen; i++)
	{
		if (i < len1)
		{
			con[i] = s1[i];
		}
		else
		{
			con[i] = s2[i - len1];
		}
	}
	return (con);
}
