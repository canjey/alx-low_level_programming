#include "main.h"
/**
* times_table - prints the times table
*
*/

void times_table(void)
{
	int a;
	int b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = b * a;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result <= 9)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
