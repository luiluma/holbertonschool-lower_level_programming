#include <stdio.h>
#include "main.h"

/**
  *main - Prints 1-100 Replaces multiples of 3 Fizz; 5 Buzz, 3 y 5 FizzBuzz
  *
  *Return: 0
  */

int main(void)
{
	int i;

	char Fizz, Buzz, FizzBuzz;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)

			printf("%d", FizzBuzz);

		else if ((i % 3) == 0)

			printf("%d", Fizz);

		else if ((i % 5) == 0)
		{

			if (i == 100)

			printf("%d", Buzz);

		else
			printf("%d", Buzz);

		}

		else
			printf("%i", i);

	}

			putchar('\n');

				return (0);
}
