#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: defined parameter
*/
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
