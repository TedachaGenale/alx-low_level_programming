#include "main.h"

/**
 * _isdigit - Function that checks for digit
 * @c: Digit to be checked
 * Return: Always 1 success
 * 0 not success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
