#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: first string
* @src: second string
* @n: number of strings to concatenate from src
* Return: A pointer of the string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != 0)
	{
		i++;
	}
	for (; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
