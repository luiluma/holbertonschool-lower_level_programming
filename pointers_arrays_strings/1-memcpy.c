#include "main.h"

/**
  * _memcpy - function copies
  *
  * @dest: where to copie de memory of
  * @src: from memory area
  * @n: the number bytes
  * Return: a pointers to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
