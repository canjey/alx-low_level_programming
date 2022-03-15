#include "main.h"
/**
* _isalpha - checks for alphabetic charater
* @c: taken as parameter
* Return: Always (1)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		Return(1);
	}
	else
	{
		Return(0);
	}
}
