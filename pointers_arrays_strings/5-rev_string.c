#include "main.h"
/**
  * rev_string - Reverses a string
  *
  * @s: The string to reverse
  *
  * Return: nothing
  */
void rev_string(char *s)
{
	int i, len;
	char str;

	i = 0;
	len = _strlen(s) - 1;

	while (len >= i)
	{
		str = s[len];
		s[len] = s[i];
		s[i] = str;
		len--;
		i++;
	}
}

/**
  * _strlen - return legth of a string
  *
  * @s: string whose length of the string
  *
  * Return: length of the string
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
