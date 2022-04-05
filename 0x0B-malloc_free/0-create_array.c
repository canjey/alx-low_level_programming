#include "main.h"
#include "stdlib.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (0);
	}
	a = malloc(size * sizeof(char));
	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
