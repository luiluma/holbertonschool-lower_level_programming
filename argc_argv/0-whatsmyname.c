#include "main.h"
#include <stdio.h>

/**
   * main - program that prints its name, followed by a new line
   *
   * @argc: arg count
   * @argv: arg vector
   *
   * Return: 0
   */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
