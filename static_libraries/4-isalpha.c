#include "main.h"
#include <ctype.h>
/**
  *_isalpha - check for an alphabetic character
  *
  *@c: yhe letter the funtion check
  *
  *Return: 1 if c is a letter, 0 otherwise
  */

int _isalpha(int c)

{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);

	else

		return (0);

}
