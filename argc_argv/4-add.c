#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
   * main -  numbers
   * @argc: number arg passed to the function
   * @argv: argument vector of pointers to strings
   *
   * Return: 0 if no errors, else 1
   */
int main(int argc, char *argv[])
{
	int x, i, a;

	x = 0;

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a]; a++)
		{
			if (isdigit(argv[i][a]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		x += atoi(argv[i]);
	}
	printf("%d\n", x);
	return (0);
}
