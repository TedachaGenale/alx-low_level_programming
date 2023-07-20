#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line
 * @n: Number of times the character should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		_putchar(92);
		if (n > 1)
		{
			for (i = 1; i < n; i++)
			{
				_putchar('\n');
				for (j = i; j; j--)
					_putchar(' ');
				_putchar(92);
			}
		}
	}
	_putchar('\n');
}
