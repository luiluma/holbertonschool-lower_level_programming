#include "main.h"

/**
   * root - searches for if a number is prime
   *
   * @n: the number to check
   * @i: the numbers we'll go through
   *
   * Return: Whether or not the number is a prime number
   */

int root(int n, int i)
{
	if (n <= 1 || n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	else if (n > i)
		root(n, i + 1);

	return (1);
}

/**
   * is_prime_number - tells us if an integer is a prime number or not
    *
     * @n: the number to check
      *
       * Return: 0 if the number is not prime, and 1 if it is
        */

int is_prime_number(int n)
{
	return (root(n, 2));
}
