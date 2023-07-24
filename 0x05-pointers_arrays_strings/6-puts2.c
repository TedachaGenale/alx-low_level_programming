#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: Pointer of the string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
