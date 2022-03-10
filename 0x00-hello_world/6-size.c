#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int longInt;
	long long int longlongInt;
	float floatType;
	double doubleType;
	char charType;

	printf("Size of a char: %lu\n ", sizeof(charType));
	printf("Size of a int: %lu\n ", sizeof(intType));
        printf("Size of a long int: %lu\n ", sizeof(longInt));
	printf("Size of a long long int: %lu\n ", sizeof(longlongInt));
	printf("Size of a float: %lu\n ", sizeof(float));
}
