#include "main.h"

/**
   * malloc_checked - allocate memory using malloc.
   *
   * @b: size to allocate
   * Return: pointer malloc memory space
   */

void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
