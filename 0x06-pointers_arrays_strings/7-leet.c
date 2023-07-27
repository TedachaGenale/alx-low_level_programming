#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @str: Pointer to the string to be encoded
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	int i, j;
	int leet[8] = {'O', 'L', '*', 'E', 'A', '*', '*', 'T'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((str[i] == leet[j]) || (str[i] == leet[j] + 32))
				str[i] = j + '0';
		}
	}
	return (str);
}
