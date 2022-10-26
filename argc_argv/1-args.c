#include "main.h"
#include <stdio.h>

/**
   * main - prints the number of arguments passed into it
   *
   * @argc: arg counter
   * @argv: arg vector
   *
   * Return: 0
   */

int main(int argc, char *argv[])
{
	int i;
	printf("%dn", argc);

	for(i = 0; i < argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
