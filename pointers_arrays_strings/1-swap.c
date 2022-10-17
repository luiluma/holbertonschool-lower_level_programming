#include "main.h"
/**
  * swap_int - swap the value of two integer
  *
  * @a: first integer
  * @b: second integer
  * RETURN: 0
  */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;
}
