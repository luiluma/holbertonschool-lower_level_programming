#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main - Determines if a number is positive, negative or zero.
 *
 *Return: 0 
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d positive\n" ,n);
else if (n == 0)
printf("%d zero\n" ,n);
else	
printf("%d is negative\n" ,n);
return (0);
}