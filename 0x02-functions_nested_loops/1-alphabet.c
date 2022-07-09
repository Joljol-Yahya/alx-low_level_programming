#include "main.h"
#include <stdio.h>
/**
 * main-Checks the code
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp = 'a';

		while(alp <= 'z')
		{
			putchar(alp);
				alp++;
		}
		putchar('\n');

		return(0);
}
