#include "main.h"

/**
     *print_alphabet_x10 - prints the alphabet 10 times
     *
     *Return: 0
     */

void print_alphabet_x10(void)

{

char n;

int i;

	for (i = 0; i <= 10)
	{

	for (n = 'a'; n <='z'; n++)
	{

		_putchar(i);
	}

	_putchar('\n');

	}
}	
