#include <stdio.h>
/**
 * main-Prints all the possible of two two numbers
 *
 * Return:Aways 0 (Success)
 */
int main(void)
{
	int a, b, i, k;

	for (a = 46; a <= 58; a++)
	{	for (b = 46; b <= 58; b++)
		{
			for (i = 46; i <= 58; i++)
			{
				for (k = 46; k <= 58; k++)
				{
					if (((k + i) > (a + b) && i >= a) || a < k)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(i);
						putchar(k);
						
						if (a + b + i + k == 228 && a == 58)
						{
							break;
						}
						else
						{
							putchar(',');
							
							putchar(' ');
						}
					}
				}
			}
		}
		putchar('\n');

		return (0);
	}
}
