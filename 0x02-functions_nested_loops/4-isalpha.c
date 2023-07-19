#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar using putchar prototype
 *
 * Return: Always 0 (sucess)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
