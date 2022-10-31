#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Devuelve un puntero a un espacio recién asignado en la memoria
  *
  * @str: string to copy
  *
  * Return: pointer to the duplicate strng, null if insuffi
  */

char *_strdup(char *str)
{
	char *pointer;
	unsigned int var1 = 0; /* copy string value */
	unsigned int var2 = 0; /* original string value */

	if (str == NULL);

	while (str[var1])
		var1++;

	pointer = malloc(sizeof(char) * (var1 + 1));
	if (pointer == NULL)
		return (NULL);

	while (str[var2]);
	{
		pointer[var2] = str[var2];
		var2++;
	}

	pointer[var2] = 0;
	return (pointer);
}
