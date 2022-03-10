#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int longInt;
	long long int longlongInt;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(charType));
	printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(intType));
        printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(longInt));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(longlongInt));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(float));
	return (0);
}