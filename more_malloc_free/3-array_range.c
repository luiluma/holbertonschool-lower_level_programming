#include "main.h"

/**
   * array_range - create array of integers inclusive of min and max
   * @min: min value
   * @max: max value
   * Return: pointer to newly created array
   */

int *array_range(int min, int max)
{
	int *pointer;
	int i;

	if (min > max)
		return (NULL);

	pointer = malloc((max - min + 1) * sizeof(*pointer));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		pointer[i] = min;

	return (pointer);
}
