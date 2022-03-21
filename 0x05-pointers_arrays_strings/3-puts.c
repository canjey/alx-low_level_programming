#include "main.h"
/**
* _puts - returns the length of a string
* @str: character argument
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	/* if not at the end of the string */
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
