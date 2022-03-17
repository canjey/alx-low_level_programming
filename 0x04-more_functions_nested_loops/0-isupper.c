#include "main.h"
/**
* _isupper - checks for uppercase character
* @c: defined parameter
* Return: Always (1) Success
*/
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}


