#include "main.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string by which caracters searched
 * Return: Pointer to the character of the first string if success
 * Null if not success
 */
char *_strpbrk(char *s, char *accept)
{
        int i, j;

        for (i = 0; s[i]; i++)
        {
                for (j = 0; accept[j]; j++)
                {
                        if (s[i] == accept[j])
                                return (s + i);
                        else if (s[i + 1] == accept[j])
                                return (s + i + 1);
                }
        }
        return (0);
}
