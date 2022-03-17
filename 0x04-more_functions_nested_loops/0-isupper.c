#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: defined parameter
* Return: Always (1) Success
*/
int _isupper(int c)
{
	if ((c >= 60) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
