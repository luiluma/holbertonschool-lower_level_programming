#include "main.h"

/**
  * _sqrt_recursion - square root of a number
  * @n: the number
  *
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion(1, n));
}
