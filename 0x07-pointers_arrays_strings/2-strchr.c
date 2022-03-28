#include "main.h"

/**
* _strchr - A function to find characters
* @s: A pointer to the main string
* @c: What we are looking for
* Return: A pointer to a character
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (0);
	}
}
