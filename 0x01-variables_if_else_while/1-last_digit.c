#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -> assign a random number to the variation time it executed
 * and print the last digit of the number of stor variable n
 * Return  : Always 0
 */
int main(void)
{
int n;
int lastn;
strand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;
if (lastn > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
}
else if (n==0)
{
printf("Last digit of %d is %d and is 0\n", n, lastn);
}
else
{
 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
}
return (0);
}
