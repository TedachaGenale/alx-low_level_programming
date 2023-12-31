#include "main.h"

void rev_string(char *n);

/**
 * infinite_add - Function that adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: The buffer to store result
 * @size_r: Buffer size
 * Return: Pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + i) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

/**
 * rev_string - Function that reverse array
 * @n: Pointer to the array
 */

void rev_string(char *n)
{
	int i = 0, j, l  = 0;
	char k;

	while (n[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = i; l <= j / 2; i--, l++)
	{
		k = n[l];
		n[l] = n[i];
		n[i] = k;
	}
}
