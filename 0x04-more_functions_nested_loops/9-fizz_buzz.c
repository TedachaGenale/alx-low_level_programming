#include "main.h"

/**
 * main - Function that prints FizzBuzz
 * Return: Always 0 (success)
 * 1 Not success
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0 && i < 100)
			printf("Buzz ");
		else if (i == 100)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
