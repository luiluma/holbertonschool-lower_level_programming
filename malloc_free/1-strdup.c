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

	pointer = malloc(var1 * sizeof(*pointer) + 1);
	if (pointer == NULL)
		return (NULL);

	for (var2 = 0; var2 < var1; var2++)

		pointer[var2] = str[var2];

	pointer[var2] = '\0';

	return (pointer);
}
