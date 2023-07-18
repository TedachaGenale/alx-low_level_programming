#include <unistd.h>
/**
 * _putchar - function that prints a character to stdout
 * @ch: character to be printed
 * Return: always 1 if success
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
