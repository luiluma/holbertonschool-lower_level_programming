#include "main.h"
/**
  * more_numbers - prints 10 times the numbers from 0-14
  *
  * Return: 0
  */

void more_numbers(void)
{

	int i;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)

				putchar(x / 10 + '0');

			putchar(x % 10 + '0');

		}

		putchar('\n');
	}
}

