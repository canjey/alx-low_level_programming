#include "stdlib.h"
#include "stdio.h"

/**
* main - A funtion that prints multiples of numbers
* @argc: Number of arguments passed to the function
* @argv: An array that holds the arguments passed
* Return: Success Always (0) Fail is (1)
*/
int main(int argc, char *argv[])
{
	int i, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = 1;
	for (i = 1; i < argc; i++)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);
	return (0);
}
