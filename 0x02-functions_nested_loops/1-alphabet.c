#include "main.h"
/**
 * print_alphabet - Function that prints the alphabet in lowercase
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
