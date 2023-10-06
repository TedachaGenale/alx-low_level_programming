#include "main.h"
/**
 * _strncat - Function that concatenates two strings
 * @n: Number of src characters to be concatenated
 * @src: Pointer to src string
 * @dest: Pointer to dest string
 * Return: Pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
        int i, j, k;

        for (i = 0; dest[i]; i++)
                ;
        k = i;

        for (i = k, j = 0; j < n && src[j] != '\0'; j++, i++)
        {
                dest[i] = src[j];
        }
        dest[i] = '\0';
        return (dest);
}
