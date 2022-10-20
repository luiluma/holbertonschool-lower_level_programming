#include "main.h"

/**
  * string_toupper - code
  *  @scr: pointer
  * Return: scr
  */
char *cap_string(char *scr)
{
	int x, y, z;
	char p[] = {44, 59, 33, 32, 46, 63, 34, 40, 41, 123, 125, 10, 9};
	z = p[3];

	y = strlen(scr);
	x = 0;
	while (x < y)
	{
		if (scr[x] == z)
		{
			if (scr[x + 1] >= 'a' && scr[x + 1] <= 'z')
				scr[x + 1] -= 32;
		}
		x++;
	}
	return (scr);
}
