#include "main.h"

/**
* _strncpy - copies a string
* @dest: first string
* @src: second string
* @n: max number to copy
* Return: A pointer to a character
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
