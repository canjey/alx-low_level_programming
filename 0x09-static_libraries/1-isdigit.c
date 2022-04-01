#include "main.h"
/**
* _isdigit - checks for digit
* @c: defined parameter
* Return: Always (1) Success
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
