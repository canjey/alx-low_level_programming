#include "main.h"
/**
* _memcpy - copies characters to a destination
* @dest: A pointer pointing to the destination
* @src: A pointer pointing to the source
* @n: Number of integers to be copied
* Return: A character
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, size = n;

	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
