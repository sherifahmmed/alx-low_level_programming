#include "main.h"

/**
 * _strcmp - Compares pointers to two string.
 *
 * @s1: A pointer to the first string to be compered.
 * @s2: A pointer to the second string to be compered.
 *
 * Return: if str1 < str2,
 * the negative difference of the first unmatched characters.
 * if srt1 == str2, 0.
 * if str1  > str2, the positive difference of the first unmatched characters.
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
