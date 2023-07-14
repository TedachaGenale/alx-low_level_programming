#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, l;

	n = 0;
	while (n < 100)
	{
		m = n % 10;
		l = n / 10;
		if (m > l)
		{
			putchar(l + '0');
			putchar(m + '0');
			if (n < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		n++;
	}
	putchar('\n');
	return (0);
}
