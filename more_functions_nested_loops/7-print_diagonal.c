#include "main.h"
/**
  *print_diagonal - writes a line n times
  *
  * @n: the number of lines
  * Return: 0
  */
void print_diagonal(int n)

{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{

			for (j = 1; j <= i; j++)
			{
				if (j != i)

					putchar(' ');
				if (j == i)
				{

				putchar(92);
				putchar('\n');
				}

			}
		}
	}
	else
		putchar('\n');
}

