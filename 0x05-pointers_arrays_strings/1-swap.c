#include "main.h"
/**
* swap_int - swaps the value of a and b
* @a: first variable
* @b: second variable
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
