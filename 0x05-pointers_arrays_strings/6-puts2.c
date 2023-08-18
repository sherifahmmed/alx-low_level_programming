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
	int len = 0, i;

	while (*str != '\0')
		len++;
	for(i = 0; i < len; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
