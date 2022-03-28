#include "main.h"
/**
* _memset - replaces words with speific characters
* @s: characters to BE REPLACED
* @b: What to replace with
* @n: The number of characters to change
* Return: character
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	while (i < size)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
