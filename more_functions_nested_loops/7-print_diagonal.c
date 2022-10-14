#include "main.h"
/**
  *print_line - writes a line n times
  *
  * @n: the number of lines
  * Return: 0
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (size > 0)
	{

		for (i = 1; i <= size; i++)
		{

			for (j = 1; j <= size; j++)
			{

				putchar(92);

				if (j == size)

					putchar('\n');
			}
		}

	}
	else

		putchar('\n');
}

