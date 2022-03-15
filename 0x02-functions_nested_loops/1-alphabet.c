#include<stdio.h>
/**
* main - Entry point
*
* Return: Always (0) Success
*/
void print_alphabet(void);

int main(void)
{
	putchar(print_alphabet());
	return (0);
}

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
}
