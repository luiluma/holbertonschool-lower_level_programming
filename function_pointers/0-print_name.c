#include "function_pointers.h"

/**
  * print_name - name a prints
  * @name: name
  * @f: function point
  *
  * Return: 0
  */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
