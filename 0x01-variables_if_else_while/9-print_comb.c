#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0.;
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
