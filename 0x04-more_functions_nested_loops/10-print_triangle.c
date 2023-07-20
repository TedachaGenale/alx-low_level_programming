#include "main.h"

/**
 * print_triangle - Function that prints a triangle
 * @size: The number of characters those print the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0 ; i < size; i++)
		{
			j = i;
			k = i + 1;

			for (; j < size - 1; j++)
			{
				_putchar(' ');
			}

			while (k > 0)
			{
				_putchar(35);
				k--;
			}
			_putchar('\n');
		}

	}
	else
		_putchar ('\n');
}
