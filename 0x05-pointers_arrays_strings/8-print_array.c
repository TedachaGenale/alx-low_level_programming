#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: Array to be printed its elements
 * @n: Number of elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{	printf(",");
			printf(" ");
		}
	}
	printf("\n");

}
