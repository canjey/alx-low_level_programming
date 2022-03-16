#include "main.h"
/**
* _abs - Gets the absolute value of an integer
* @r : declared
* Return: Always (0)
*/
int _abs(int r)
{
	if (r < 0)
	{
		r *= -1;
		return (r);
	}
	return (r);
}

