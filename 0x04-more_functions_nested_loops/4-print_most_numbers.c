#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 up to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 4 && i != 2)
			_putchar(i + 48);
	}
	_putchar('\n');
}
