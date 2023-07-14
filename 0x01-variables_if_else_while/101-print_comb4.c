#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = a + 1;

		while (b <= 9)
		{
			int c = b + 1;

			while (c <= 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);

}
