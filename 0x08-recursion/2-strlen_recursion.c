#include "main.h"
/**
* _strlen_recursion - A function that counts the number of strings
* @s: A pointer to the string
* Return: An integer
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
