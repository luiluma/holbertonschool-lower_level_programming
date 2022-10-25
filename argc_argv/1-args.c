#include "main.h"

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
	int a;
	(void)argv;

	for (a = 0; a <= argc; a++)

		printf("%d\n", a - 2);

		return (0);

}
