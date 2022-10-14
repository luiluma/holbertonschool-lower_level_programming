#include "main.h"

/**
  * print_square -  that prints a square, followed by a new line
  *
  * @size: is the size of the square 
  * Return: always 0
  */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{

			for (j = 1; j <= size; j++)
			{

				putchar(35);

				if (j == size)
				putchar('\n');

			}

		}

	}
	else
		putchar('\n');

}
