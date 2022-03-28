/**
* _strpbrk - A function locates the first occurrence in the string
* @s: Scan the string
* @accept: Looks for the particular string
* Return: A pointer to a character
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return (&s[i]);
}
