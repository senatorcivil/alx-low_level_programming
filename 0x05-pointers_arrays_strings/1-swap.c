#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: test code
 * @b: test code
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
