#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if(n > 0)
{
printf(" is positive\n");
} else if (n == 0){
printf("n is zero\n");
} else {
printf("n is negative\n");
}
return (0);
}



