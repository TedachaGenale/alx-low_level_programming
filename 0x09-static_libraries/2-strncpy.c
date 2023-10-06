#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @n: Number of characters from src to be copied
 * @src: Pointer to the src string
 * @dest: Pointer to the dest string
 * Return: Pointer to the dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
                dest[i] = src[i];
        for (i = i; i < n; i++)
                dest[i] = '\0';
        return (dest);
}
