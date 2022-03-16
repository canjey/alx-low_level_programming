#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int a, b, product;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				product = a * b;
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (b == 0)
				{
					_putchar('0');
				}
				else if ((product > 9) && (product <= 99)
				{
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else if ((product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar((product % 100) + '0');
				}
				else if ((product <= 9) && (b != 0))
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
				}
			}
		}
	}
}
