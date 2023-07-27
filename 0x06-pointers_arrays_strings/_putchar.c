#include <unistd.h>
#include "main.h"
/**
 * _putchar - Program that prints character to std out
 * @c: Character to be printed
 * Return: Always 1 success
 * -1 unsuccess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
