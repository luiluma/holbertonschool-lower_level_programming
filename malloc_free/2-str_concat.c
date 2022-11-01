#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *str_concat - concatenate two string
  *
  * @s1: string 1
  * @s2: string 2
  *
  * Return: pointer to concat str
  */

char *str_concat(char *s1, char *s2)
{
	char *pointer;
	int a, b, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	pointer = malloc(a + b + 1) * sizeof(char);
	if (poniter == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		pointer[c] = s1[c];
	}

	for (d = 0; d < b; d++)
	{
		pointer[d] = s2[d];
	}

	pointer[c] = '\0';
	return (pointer);
}
