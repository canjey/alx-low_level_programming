#include "main.h"
/**
* strlen - returns the length of a string
* @s: character argument
*/

int _strlen(char *s)
{
	int a = 0;

	while (s[a] ! = '\0')
		a++;
	return (a);
}
