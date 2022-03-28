
/**
* _strstr - A function to return the first ocurrence of a string
* @haystack: Scan the string
* @needle: Looks for the particular string
* Return: A pointer to a character
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	if (needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				i++;
			}
			else
			{
				break;
			}
		}
		i++;
	}
	return (&needle[j]);
}
