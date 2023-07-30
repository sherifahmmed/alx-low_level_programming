#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the alphabet in lowercase and then in uppercase.
 * Return: 0.
*/

int main(void)
{
	for (int i = 97; i <= 122; i++)
		putchar(i);

	for (int j = 65; j <= 90; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
