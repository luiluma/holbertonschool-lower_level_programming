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
    unsigned int i = 0;
    int n = 0, p = 0;

    if (!b)
        return (0);

    for (n = 0; b[n] != '\0'; n++)
    {}
}
