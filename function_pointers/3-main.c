#include "3-calc.h"

/**
   * main - function
   * @argc: arg count
   * @argv: string of arg array
   * Return: 0
   */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*pointer)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	pointer = get_op_func(argv[2]);
	if (pointer == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", pointer(a, b));

	return (0);
}
