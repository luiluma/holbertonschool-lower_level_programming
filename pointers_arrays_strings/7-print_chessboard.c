#include "main.h"

 /**
    * print_chessboard -  that prints the chessboard
    * @a: pointer to pieces to print
    *
    * Return: void
    */

void print_chessboard(char (*a)[8])
{
	int c, f;

	for (c = 0; c < 8; c++)
	{
		for (f = 0; f < 8; f++)
		{
			putchar(a[c][f]);
		}
		putchar('\n');
	}
}

