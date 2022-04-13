#include "function_pointers.h"

/**
* int_index - a function to find the integer
* @array: input array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && array && size)
	{
		for (i = 0; i <= size; i++)
		{
			if(cmp(array[i]))
			{
				return(i);
			}
		}
	}
	return (-1);
}
