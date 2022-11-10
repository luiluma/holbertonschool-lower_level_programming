#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - executes a function given as a parameter on each element of an array
  * @array: array integers
  * @size: size array
  * @action: funcion point
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array && action)

		for (v = 0; v < size; v++)
			action(array[v]);
}
