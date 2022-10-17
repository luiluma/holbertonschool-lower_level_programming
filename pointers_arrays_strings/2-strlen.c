#include "main.h"
/**
  * _strlen - returns the length of a string
  *
  * @s: the string  whose length to return
  *
  * RETURN: the length of a string
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != 0)
	{
		c++;
	}

	return (c);
}
