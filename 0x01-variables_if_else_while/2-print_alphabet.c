#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase.
 * Return: 0.
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		putchar('\n');
	}

	return (0);
}
