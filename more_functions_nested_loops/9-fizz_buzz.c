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

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)

			printf("Fizz ");

		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");

			if (i < 100)

				printf(" ");
		}

		else if (i % 5 == 0 && i % 3 == 0)
		{

			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);

		}


	}

			putchar('\n');

				return (0);
}
