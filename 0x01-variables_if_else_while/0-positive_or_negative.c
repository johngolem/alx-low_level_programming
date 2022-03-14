#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
/* checks if no if positive */
printf("%d is positive\n", n);
/* checks if no is zero */
}
else if (n == 0)
{
printf("%d is zero\n", n);
/* checks if no is negative */
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
