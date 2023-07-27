#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}
