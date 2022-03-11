#include <stdio.h>
/**
* main - Entry point
*
* Return: Always (0) Success
*/
int main(void)
{
	char c;
	char d = '\n';

	for ( c = '0'; c <= '9'; c++)
	{
		putchar(c);
		putchar(',');
		putchar(' ');
	}
	putchar(d);
	return (0);
}
