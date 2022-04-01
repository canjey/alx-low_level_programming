#include "main.h"
#include "stdio.h"

/**
* main - A funtion to print the numbers of arguments
* @argc: Number of arguments passed to the function
* @argv: An array that holds the arguments passed
* Return: Success Always (0)
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
