#include "main.h"



/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int **) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i--)
					free(array[i]);
				free(array);
				return (0);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
