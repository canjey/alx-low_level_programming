#include "main.h"

/**
* cap_string - capitalises on the words
* @str: takes argument as pointer to the string
* Return: Returns a string
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.') && str[i+1] >= 97 && str[i+1] <= 122)
		{
			str[i+1] = str[i+1] - 32;
		}
		i++;
	}
	return (str);
}
