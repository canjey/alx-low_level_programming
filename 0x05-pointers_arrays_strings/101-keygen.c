#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
* Return: int
*/
int main(void)
{
	int counter = 0;
	srandom(time(NULL));
	char randChar;
	int password;

	printf("Type in a password length);
	scanf("%d", &password);
	while (counter < password)
	{
		randChar = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"[random() % 62];
		printf("%c", randChar);
		counter++;
	}
	printf("\n");
	return 0;
}
