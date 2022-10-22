#include "main.h"

/**
   * _strspn - gets the length of a prefix substring
   *
   * @s: segment to return bytes from
   * @accept: the bytes to include
   *
   * Return: number of bytes in initial segment of s which consist only
   * of bytes from accept
   */

unsigned int _strspn(char *s, char *accept)
{
	int a, j;
	int c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[a] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
