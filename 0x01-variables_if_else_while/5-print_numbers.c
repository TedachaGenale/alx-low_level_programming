#include <stdio.h>
/**
 * main - main function
 * Return: always 0 if success
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
