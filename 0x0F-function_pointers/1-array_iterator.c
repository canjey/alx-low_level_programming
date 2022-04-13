#include "function_pointers.h"

/**
* array_iterator - executesa function given as a param
* @array: Takes a pointer of array
* @size: size of the array
* @action: pointer of the function to use
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
		{
			action(*(array++));
		}
	}
}
