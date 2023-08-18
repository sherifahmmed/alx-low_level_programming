#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: the string to be treated
 *
 * Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
