#include "main.h"

/**
  * _strlen - string counter
  * @s: string
  * Return: result
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  * print_rev - reverse string
  * @s: string
  */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
