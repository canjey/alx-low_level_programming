/**
* string_toupper- translates lower character to upper case
* @str: String to convert
* Return: A pointer to an integer
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		str[i];
		i++;
	}
	return (str);
}
