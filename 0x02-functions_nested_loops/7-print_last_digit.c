#include "main.h"
/**
 * print_last_digit - Function that prints the last digit of a number
 * @n: Number to be printed its last digit
 * Return: The value of last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m *= -1;
	_putchar(m + '0');
	return (m);
}
