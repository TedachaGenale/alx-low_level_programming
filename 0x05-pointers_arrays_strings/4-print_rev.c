#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * @s: Pointer to the string to be printed in reverse
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (j = i - 1; s[j]; j--)
		_putchar(s[j]);
	_putchar('\n');
}
