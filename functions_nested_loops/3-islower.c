#include "main.h"
/*
 * int_islower - verifica si una letra es minuscula
 *
 *c: the letter the function checks
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
