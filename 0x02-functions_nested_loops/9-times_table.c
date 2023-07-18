#include "main.h"
/**
 * times_table - Function that prints 9 times table
 */
void times_table(void)
{
	int n = 0, j, k;

	while (n < 10)
	{
		j = 0;

		while (j < 10)
		{
			k = n * j;

			if (k <= 9 && j != 0)
			{
				_putchar(32);
				_putchar(k + '0');
			}
			else if (j == 0)
			{
				_putchar(k + '0');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');

			}
			if (j < 9)
			{
				_putchar(44);
				_putchar(32);
			}
			j++;
		}
		_putchar('\n');
		n++;
	}
}
