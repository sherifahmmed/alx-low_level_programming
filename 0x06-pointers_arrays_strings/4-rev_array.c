#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integers.
 *
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
