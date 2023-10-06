#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer to the string whose memory to be filled
 * @b: Character to be filled with
 * @n: Number of bytes to be filled
 * Return: Pointer to the filled string
 */
char *_memset(char *s, char b, unsigned int n)
{
        int i;

        for (i = 0; n > 0; i++)
        {
                s[i] = b;
                n--;
        }

        return (s);
}
