#include "main.h"
/**
  *print_asign - the sign of a number
  *
  *@n: the number to check
  *
  *Return: 1 and prints + 0 and prints -1 and prints
  */

int print_asign(int n)
{
	if (n > 0)

	{
	_putchar('+');

		return (1);

	}

	else if (n == 0)
	{
	_putchar('0');

		return (0);
	}

	else
	{
	_putchar('-');

		return (-1);
	}
}
