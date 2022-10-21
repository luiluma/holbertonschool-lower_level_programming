#include "main.h"

/**
  * _memset - fills a memory area with repeated bytes
  * @s: pointer to the memory area
  * @n: bytes of the memory area pointed
  * @b: constant byte
  * Return: pointer to the memory area @s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
