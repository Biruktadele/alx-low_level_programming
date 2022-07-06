#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int i;
srand(time(0))
i = rand() - RAND_MAX / 2;
if (i == 0)
printf("%d is zero\n", i);
if (i > 0)
printf("%d is positive\n", i);
else
{
printf("%d is negative\n", i);
}
return (0);
}
