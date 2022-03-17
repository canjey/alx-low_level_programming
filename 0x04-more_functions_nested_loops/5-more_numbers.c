#include "main.h"
/**
* more_numbers- prints the list 10 times
*
*/
void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}			
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
	}
