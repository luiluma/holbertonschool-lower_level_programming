#include "main.h"
/*
  * _puts_recursion - print a string
  * @s: string
  * Return: 0
  */

void _puts_recursion(char *s);

{

	if (*s == '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
