#include "main.h"
#include "stdio.h"

/**
* main - A funtion to print the names of arguments one by one
* @argc: Number of arguments passed to the function
* @argv: An array that holds the arguments passed
* Return: Success Always (0)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

