#include <stdio.h>
#include <stdlib.h>

/**
  * op_add - operator add
  * @a: first int
  * @b: second int
  *
  * Return: suma 2 numb
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub - operator sub
  * @a: first int
  * @b: second int
  *
  * Return: sub 2 numb
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - operator mul
  * @a: first int
  * @b: second int
  *
  * Return: mul 2 numb
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - div operator
  * @a: first int
  * @b: second int
  *
  * Return: div 2 numb and exit 100
  */
int op_div(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - mod operator
  * @a: first int
  * @b: second int
  *
  * Return: mod 2 numb and exit 100
  */

int op_mod(int a, int b)
{
	if (a == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
