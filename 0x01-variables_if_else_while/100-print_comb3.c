#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits.
 * Return: 0.
*/

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 1; j <= 57; j++)
		{
			if (i != j && j != i)
			{
				putchar(i);
				putchar(j);
			}
			if (i != 56)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
