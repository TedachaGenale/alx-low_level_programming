#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: Pointer of the string to be printed
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
		;
	j = i / 2;
	if (i % 2 == 1)
		j++;
	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
