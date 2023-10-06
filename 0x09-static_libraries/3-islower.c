#include "main.h"
/**
 * _islower - Function that checks for lowercase
 * @c: Char to be checked
 * Return: On success 1
 * On unsuccess return 0
 */
int _islower(int c)
{
        if ((c >= 97) && (c <= 122))
                return (1);
        else
                return (0);
}
