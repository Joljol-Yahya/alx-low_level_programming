#include <unistd.h>
#include <stdio.h>
/**
 * main-Prints quote with a new line
 *
 * Return:1 for sucess
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
