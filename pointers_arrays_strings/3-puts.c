#include "main.h"
/**
  * _puts - prints out a string
  *@str: the string to be printed out
  *
  * Return: 0
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		printf("%c", i);
	}
	printf('\n');
}
