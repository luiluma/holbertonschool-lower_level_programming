#include "main.h"

/**
  * reverse_array - reverse the content of an array of integers
  *
  * @a: the array to reverse
  * @n: the number of elements in the array
  *
  * Return: 0
  */

void reverse_array(int *a, int n)
{
	int temp; /* matiene value */

	int i; /* counter */

	int r = n - 1; /* rev counter */

	for (i = 0; i < r; i++)
	{
		temp = a[i];
		a[i] = a[r];
		a[r] = temp;
		r--;
	}

}
