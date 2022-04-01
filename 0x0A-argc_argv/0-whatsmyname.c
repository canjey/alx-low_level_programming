#include "main.h"
#include <stdio.h>

/**
* main - A funtion to print the name of the program
* @argc: Number of arguments passed to the function
* @argv: An array that holds the arguments passed
* Return: Success Always (0)
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
