#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) >5) {
		printf("Last digit of %lf is %lf and is greater than 5");
	} else if ((n%10) ==0); {
		printf("Last digit of %lf is %lf and is 0");
	} else {
		printf("Last digit of %lf is %d and is less than 6 and not 0\n);
	}

	return (0);
}