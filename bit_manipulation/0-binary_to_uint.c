#include "main.h"
/**
 * binary_to_uint - fuctions converse binary a integer
 *
 * @b: is pointing to a string
 *
 * Return: the converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int n, i = 0;
	unsigned int dec_value = 0;

	if (b == NULL)
		return (0);
	for (n = 0; b[n] != '\0'; n++)
		if (b[n] != 48 && b[n] != 49)
			return (0);
	while (b[i])
	{
		if (b[i] == 49)
		{
		dec_value = (dec_value << 1) | 1;
		}
		else if (b[i] == 48)
		{
		dec_value = (dec_value << 1);
		}
		i++;
	}
	return (dec_value);
}

