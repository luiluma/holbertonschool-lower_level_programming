#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
  * main - multiplies two numbers
  *
  * @argc: arg counter
  * @argv: arg vector (matriz)
  *
  * Return: 0 is good, if there is an Error
  */

int main(int argc, char *argv[])
{
	int num, number, result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	num = atoi(argv[1]);
	number = atoi(argv[2]);
	result = num * number;

	printf("%i\n", result);

	return (0);
}
