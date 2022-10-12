#include "main.h"
/**
   *print_alphabet - prints the alphabet
   *
   *Return: 0
   */
void print_alphabet(void)

{
	char i;
	int n;

	for (n = 0; n < 10; n++)
{

		for (i = 'a'; i <= 'z'; i++)
{

			_putchar(i);

}

}


	_putchar('\n');

}
