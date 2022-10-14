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
	int x;

	for (i = 0; i < n; i++)
	{	
		for (x = 0; x < n; n++)
		{
			putchar(' ');

		}

		putchar('92');
		if (i < (n - 1)); 
			putchar('\n');
	}
	putchar('\n');
}
