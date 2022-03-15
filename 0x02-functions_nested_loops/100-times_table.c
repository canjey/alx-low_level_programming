#include "main.h"
/**
* print_times_table - prints table
*
*/

void print_times_table(int n)
{
	int a, b, c;

	if ((n > 0) && (n < 15))
	{
		for (a = 0; a < n; a++)
		{
			for (b = 1; b < n; b++)
			{
				c = b*a;
				if (a != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar(( c % 10) + '0');
				}
			}
		}
	}
}
