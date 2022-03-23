/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: A pointer to an integer
*/
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	else if (s1[0] > s2[0])
	{
		return (15);
	}
	return (-15);
}
