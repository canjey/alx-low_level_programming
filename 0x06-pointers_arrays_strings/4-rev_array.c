/**
* reverse_array- reverses a string
* @a: first string
* @n: size of string
* Return: A pointer to an integer
*/
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	n -= 1;
	i = 0;
	while (i <= n)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n--] = rev;
	}
}
