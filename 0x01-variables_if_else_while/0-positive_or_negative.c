#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/*Prints if the number is negative or positive*/

int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n%2 > 0)
	printf("%d is positive\n", n);
		
else
	printf("%d is negative\n", n);
	return 0;

}
