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

		for (i = 1; i < n; i++)
		{

			for (j = 1; j < n; j++)
			{

				putchar(92);


				putchar('\n');
			}
		}
		putchar('\n');
}

