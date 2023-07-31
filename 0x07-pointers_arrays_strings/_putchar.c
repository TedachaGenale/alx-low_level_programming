#include <unistd.h>

/**
 * _putchar - Function that prints character to std out
 * @c: Character to be printed
 * Return: Always 1 success
 * -1 not success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
