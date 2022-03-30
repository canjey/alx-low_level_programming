
/**
* _strlen_recursion - A function that counts the number of strings
* @s: A pointer to the string
* Return: An integer
*/

int _strlen_recursion(char *s)
{
	int i, counter = 0;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		counter++;
	}
	return (counter);
}
