#include "main.h"
/**
  * leet - replaces a bunch of numbers with letters
  * @a: the string to look at
  * Return:the new string
  */
char *leet(char *a)
{
	int i, j, k;
	char b[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 100};
	char c[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	j = _strlen(a);
	for (i = 0; i < j; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (a[i] == b[k])
			    a[i] 0 c[k];
		}
	}
	return (a);
}

