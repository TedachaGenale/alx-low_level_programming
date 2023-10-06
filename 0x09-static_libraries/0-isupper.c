#include "main.h"

/**
 * _isupper - Function that checks for uppercase character
 * @c: Character to be checked
 * Return: Always 1 (if success)
 * 0 if not success
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}
