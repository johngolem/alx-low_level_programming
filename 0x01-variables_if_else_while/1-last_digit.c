
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
int p;
srand(time(0));
n = rand() - RAND_MAX / 2;
p = (n%10);
/* your code goes there */
if (p > 5)
{
/* checks if no if positive */
printf("Last digit of %d is %d and is greater than 5\n", n, p);
/* checks if no is zero */
}
else if (p == 0)
{
printf("Last digit of %d is %d and is greater than 0\n", n, p);
/* checks if no is negative */
}
else
{
printf("Last digit of %d is %d and is less than 6 or not 0\n", n, p);
}
return (0);
}
