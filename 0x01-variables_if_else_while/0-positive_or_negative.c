#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%f is positive\n", n);
	else if (n == 0)
		printf("%f is zero\n", n);
	else 
		printf("%f is negative\n", n);
	return (0);
}
