#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of a program
 * Return: Always 0 success
 */
int main(void)
{
	int n;

	int long num = 612852475143;

	for (n = (int)sqrt(num); n > 2; n++)
	{
		if (num % n == 0)
		{
			printf("%d\n", n);
			break;
		}
	}
	return (0);
}
