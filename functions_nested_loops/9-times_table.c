#include "main.h"
/**
   * main - prints the 9 time table
   *
   * Return: Always 0
   */
void times_table(void)
{
int i, j, k;


	for (i = 0; i < 9; i++)
	{

	for (j = 0; j < 9; j++)

	k = j * i;

	if (j == 0)
	{

		_putchar(k + '0');
	}
