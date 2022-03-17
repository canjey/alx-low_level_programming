#include <stdio.h>
/**
* main- prints Fizz-Buzz
* Return: Always 0.
*/

int main(void)
{
	int a;
	char b[] = "Fizz";
	char c[] = "Buzz";

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("%s ", c);
		}
		else if (a % 3 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
