
/**
* find_root - A function to find the root of the square
* @n: Takes an integer as the the square
* @root: Finds the root of the square
* Return: an integer
*/
int find_root(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (root);
	}
	return (find_root(n, root + 1));
}

/**
* _sqrt_recursion - A function to find the root of the square
* @n: Takes an integer as the the square
* Return: an integer
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_root(n, 0));
}
