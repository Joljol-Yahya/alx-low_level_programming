#include "main.h"
#include <stdio.h>
/**
 * main-Checks the code
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
