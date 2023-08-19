#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;

	while (a[n] != '\0')
	{
		n++;
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
