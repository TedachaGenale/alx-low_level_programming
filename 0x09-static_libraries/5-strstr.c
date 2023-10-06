#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: Pointer to the main string
 * @needle: Pointer to the sub string to be located in main string
 * Return: Pointer to the location of substring in main string if success
 * null if not success
 */
char *_strstr(char *haystack, char *needle)
{
        for (; *haystack != '\0'; haystack++)
        {
                char *l = haystack;
                char *p = needle;

                while (*l == *p && *p != '\0')
                {
                        l++;
                        p++;
                }
                if (*p == '\0')
                        return (haystack);
        }
        return (0);
}
