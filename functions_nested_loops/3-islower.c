#include "main.h"
#include <ctype.h>

/*
 *_islower - check for lowercase character
 *
 *Description: Write a function that checks for lowercase character
 *
 *@c: the letter the function checks
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c);
{

	if (c >= 'a' && c <= 'z')

		return (1);

	else
		return (0);
}
