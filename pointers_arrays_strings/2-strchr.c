#include "main.h"

/**
  * _strchr - locates character in a string
  *
  * @s: string check
  * @c: character we´re looking
  *
  * Return: pointer a the first ocurrance of the character c in the string
  *
  */

char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
		s++;

	else
		return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
