
/**
* _strspn - A function to return the first ocurrence of a string
* @s: Scan the string
* @accept: Looks for the particular string
* Return: An unsigned integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (counter);
			}
		}
		i++;
	}
	return (counter);
}
