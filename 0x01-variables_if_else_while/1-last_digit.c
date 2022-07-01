#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variation time it executed
 * and print the last digit of the number of stor variable n
 * Return  : Always 0
 */
int main(void)
{
int n;

strand (time (0));
n = rand( ) . RAND_MAX / 2;
printf("last digit of %d ls ",n);
if (n>5)
{
	printf ("greater than 5");
}
if (n==0)
{
	printf ("0");
}
if (n < 6 && n !=0)
{
	printf ("less than 6 not 0");
}
printf("\n");
return (0);
}
