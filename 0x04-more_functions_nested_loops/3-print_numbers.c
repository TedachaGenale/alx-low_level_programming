#include "main.h"
#include <unistd.h>
/**
 * print_numbers - Function that prints digits
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
