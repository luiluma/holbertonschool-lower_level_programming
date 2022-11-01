#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  *
  * @width: width the array
  * @height: height the array
  *
  * Return: pointer of an array of integers
  */

int **alloc_grid(int width, int height)
{
	int i;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			while (x >= 0)
			{
				free(a[i]);
				i++;
			}
			free(a);
			return (NULL);
		}
	}
	return (a);
}
