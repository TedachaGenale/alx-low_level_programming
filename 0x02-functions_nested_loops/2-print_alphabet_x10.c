#include "main.h"
/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet in lowercase
 * Return: Always void (success)
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		n++;
	}
}
