#include "main.h"
/**
* rev_string - reverses the string
* @s: takes character as an argument
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j < i--)
	{
		c = s[j];
		s[j++] = s[i];
		s[i] = c;
	}
}
