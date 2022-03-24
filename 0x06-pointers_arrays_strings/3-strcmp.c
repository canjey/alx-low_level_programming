/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: A pointer to an integer
*/
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
