#include "main.h"

/**
 * _strspn - Fuction that gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the substring
 * Return: The Number of bytes in the initial string
 */
unsigned int _strspn(char *s, char *accept)
{
        int i, j, k, sum = 0;

        for (i = 0; s[i]; i++)
        {
                j = sum;
                for (k = 0; accept[k]; k++)
                {
                        if (s[i] == accept[k])
                        {
                                sum++;
                                break;
                        }
                }
                if (j == sum)
                        break;
        }
        return (sum);
}
