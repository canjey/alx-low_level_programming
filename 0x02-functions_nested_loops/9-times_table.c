#include "main.h"
/**
* times_table - prints the times table
*
*/

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = b * a;
			_putchar(c);
		}
		_putchar('\n');
	}
}
