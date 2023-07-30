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
		putchar(i);
	putchar('\n');
	return (0);
}
