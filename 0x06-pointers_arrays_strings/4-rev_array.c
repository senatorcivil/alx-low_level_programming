#include "main.h"
/**
 * reverse_array - reverses the content of an arr
 * ay of integers.
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (y = n - 1; y > n / 2; y--)
	{
		x = a[n - 1 - y];
		a[n - 1 - y] = a[y];
		a[y] = x;
	}
}
