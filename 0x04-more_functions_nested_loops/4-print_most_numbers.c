#include "main.h"
#include <unistd.h>

/**
 * _putchar - Function that prints the charcter to std out
 * @c: Character to be printed
 * Return: Always 1 success
 * -1 not success
 * print_most_numbers - Function that prints digits
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
