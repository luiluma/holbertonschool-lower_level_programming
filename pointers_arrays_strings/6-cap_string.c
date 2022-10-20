#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  *
  * @a: pointers
  * Return: 0
  */

char *cap_string(char *a)
{
	int i, j, k;
	char b[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	 j = _strlen(a);
	for (i = 0; i < j; i++)
	{
		for (k = 0; k <= 12; k++)
		{
			 if (a[i] == b[k])
			 if (a[i + 1] >= 97 && a[i + 1] <= 122)
			 if (a[i + 1] != b[1])
			 a[i + 1] = a[i + 1] - 32;
		}
	}	
	return(a);
}
