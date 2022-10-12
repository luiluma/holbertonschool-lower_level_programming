#include "main.h"
/*
 * islower - verifica si una letra es minuscula
 *
 *c: the letter the function checks
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */

int islower(int c)

	char c;
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
