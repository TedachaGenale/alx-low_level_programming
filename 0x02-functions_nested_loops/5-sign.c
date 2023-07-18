#include "main.h"
/**
 * print_sign - Function that prints the sign of a number
 * @n: Number to be printed its sign
 * Return: Always 1 if n is greater than 0
 * return 0 if n is 0
 * return -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
