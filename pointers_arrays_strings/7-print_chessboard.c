#include "main.h"
#include <stdio.h>
 /**
    * print_chessboard - code
    * Description: print_chessboard
    * @a: array
    * Return: 0
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

