#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - prints if the number is negative or positive
 *and prints its result
 *
i * Return 0 if the operation is successful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2 ;

	if(2 > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is negative\n", n);

	else printf ("%d is Zero\n", n);
	
	return 0;
}
