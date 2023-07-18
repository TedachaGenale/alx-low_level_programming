#include "main.h"
/**
 * jack_bauer - Function that prints every minutes of a day
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int m, n;

	m = 0;
	while (m < 24)
	{
		n = 0;

		while (n < 60)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
			n++;
		}
		m++;
	}
}
