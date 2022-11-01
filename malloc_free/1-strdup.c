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
	int var1, var2;

	if (str == NULL)
		return (NULL);

	for (var1 = 0; str[var1] != '\0'; var1++)
		var2++;

	pointer = malloc(sizeof(char) * (var2 + 1));

	if (pointer == NULL)
		return (NULL);

	for (var1 = 0; str[var1]; var1++)
	{
		pointer[var1] = str[var1];
	
	}

	pointer[var2] = '\0';

	return (pointer);
}
