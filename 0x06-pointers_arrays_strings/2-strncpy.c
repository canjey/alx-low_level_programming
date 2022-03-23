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
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
