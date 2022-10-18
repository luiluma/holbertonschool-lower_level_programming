#include "main.h"
/**
  * puts2 - prints one character out of two, starting with the first
  *
  * @str: string to look at
  *
  * Return: 0
  */
void puts2(char *str)
{
	int i;
	int len;

	i = 0;
	len = _strlen(str) - 1;

	while (i <= len)
	{
		putchar(str[i]);
		i += 2;
	}
	putchar('\n');
}

#include "main.h"
/**
  * _strlen - return length of a string
  * @s: string
  * Return: length of the string
  */

int _strlen(char *s)
{

	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
