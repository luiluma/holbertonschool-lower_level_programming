#include <stdio.h>
/**
 * main - the numbers of base 16 in lowercase
 *
 *Return: 0
 */
int main(void)
{
	char num = '0';
	char letter = 'a';

	for (num = '0'; num <= '9'; num++)
		putchar (num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar (letter);

	putchar ('\n');
	return (0);
}
