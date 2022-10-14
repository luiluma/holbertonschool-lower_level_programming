#include "main.h"
/**
   *times_table - prints the 0-9 time table
   */
void times_table(void)
{
	int f, c;
	int operation;

	for (f = 0; f <= 9; f++)
	{
	for (c = 0; c <= 9; c++)
	{

	operation = f * c;

		if (operation > 9)

		{
		_putchar(',');
		_putchar(' ');
		_putchar((operation / 10) + '0');
		_putchar((operation % 10) + '0');
		}

		else if (c == 0)
		{
			_putchar(operation + '0');
		}

		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(operation + '0');

		}
	}
	_putchar('\n');

	}
	}
