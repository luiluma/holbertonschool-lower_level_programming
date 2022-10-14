#include "main.h"
/**
  * print_line - writes line n times
  *
  * @n: the number of lines 
  * Return: 0
  */

void print_line(int n)
{

	int i = 0;

	while ( i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
