#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (success)
 */
int main(void)
{
	int l, m, n, r, s, t;

	l = 0;
	r = 1;
	while (l < 99)
	{
		for (r = 1; r < 100; r++)
		{
			m = l % 10;
			n = l / 10;
			s = r % 10;
			t = r / 10;

			if ((n == t && s > m) || t > n)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(32);
				putchar(t + '0');
				putchar(s + '0');

					if (l < 98 && r < 100)
					{
						putchar(44);
						putchar(32);
					}
			}
		}
		l++;
	}
	putchar('\n');
	return (0);
}
