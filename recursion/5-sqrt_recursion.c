#include "main.h"

/**
   * root - Finds the square root of two numbers
   *
   * @n: The number
   * @i: The number to test for the square root of @a
   *
   * Return: square root
   */

int root(int n, int i)
{
	if (i * i > n)

		return (-1);

	else if (i * i == n)

		return (i);

	else
		return (root(n, i + 1));

	return (1);

}

/**
  * _sqrt_recursion - square root of a number
  * @n: the number
  *
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	if (n == 0)

		return (0);

	return (root(n, 1));
}
