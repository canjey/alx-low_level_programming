#include "main.h"
/**
* print_to_98 - prints numbers to 98
* @n: declared variable
*
*/
void print_to_98(int n)
{
	int a;

	if (n >= 98)
	{
		for (a = n; a <= 98; a++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
	}
	else if (n <= 98)
	{
		for (a = 98; a >= n; a--)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
	}
}
