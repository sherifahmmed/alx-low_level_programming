#include <stdio.h>

/**
 * main - Entry point
 * description: prints the alphabet in lowercase except q and e.
 * Return: 0.
*/

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
