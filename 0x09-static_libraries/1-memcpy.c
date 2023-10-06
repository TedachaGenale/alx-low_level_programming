#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Pointer to the string to be copied to
 * @src: Pointer to the string copied from
 * @n: Number of bytes to be copied
 * Return:Pointer to the dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        int i;

        for (i = 0; n > 0; i++, n--)
                dest[i] = src[i];
        return (dest);
}
