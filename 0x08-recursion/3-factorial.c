
/**
* factorial - A function to find the factorial of the numbers
* @n: Takes the integer as the argument
* Return: An integer
*/
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
