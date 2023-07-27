#include "main.h"
/**
 * reverse_array - Function that reverses the content of array
 * @a: Array to be reversed
 * @n: Elements of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	j = n - 1;
	while (j > i)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j--;
		i++;
	}

}
