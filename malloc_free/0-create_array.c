#include "main.h"
#include <stdlib.h>
/**
   * create_array - creates array of chars.
   * @size: size array.
   * @c: storaged char
   *
   * Return: pointer of array and chars
   */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
