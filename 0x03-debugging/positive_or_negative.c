#include <stdio.h>
#include <time.h>
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
i = 0;
positive_or_negative(i);
return (0);
}
void positive_or_negative(int i)
{
int n;
srand(time(0))
n = rand() - RAND_MAX / 2;
if (n == 0)
printf("%d is zero\n", i);
if (n > 0)
printf("%d is positive\n", i);
if (n < 0)
{
printf("%d is negative\n", i);
}
return (0);
}

