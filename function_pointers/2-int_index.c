#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index -  function that searches for an integer
  * @array: array input ent
  * @size: size of array
  * @cmp: poniter compare value
  *
  * Return: return index first element, if no element matches -1
  * if size <= 0 return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (v = 0; v < size; v++)
			(cmp(array[v]))
				return (v);
	}
	return (-1);
}
