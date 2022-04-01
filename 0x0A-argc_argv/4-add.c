#include "stdlib.h"
#include "stdio.h"

/**
* isInteger - A function that checks if its integer
* @s: Number of arguments passed to the function
* Return: Success Always (0) Fail is (1)
*/
int isInteger(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}
/**
* main - A funtion that prints multiples of numbers
* @argc: Number of arguments passed to the function
* @argv: An array that holds the arguments passed
* Return: Success Always (0) Fail is (1)
*/
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isInteger(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
