#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/**
 * main - prints if the number is negative or positive
 * and prints its result
 *
 * Return 0 if the operation is successful
 */

int main(void)
{
	int n = 0;
	srand(time(0));
	n = rand() - RAND_MAX / 2 ;
	if(n%2 > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else printf ("%d is zero\n", n);
	
	return 0;
}
