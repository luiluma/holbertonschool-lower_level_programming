#include "main.h"
#include <string.h>

/**
  *  _strlen - strlen
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
