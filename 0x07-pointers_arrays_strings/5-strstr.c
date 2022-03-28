
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
	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			return (&needle[j]);
		}
		i++;
	}
	return (&needle[j]);
}
