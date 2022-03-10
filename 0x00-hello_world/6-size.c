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

	printf("Size of a char: ", sizeof(charType));
	printf("Size of a int: ", sizeof(intType));
        printf("Size of a long int: ", sizeof(longInt));
	printf("Size of a long long int: ", sizeof(longlongInt));
	printf("Size of a float: ", sizeof(float));
}
