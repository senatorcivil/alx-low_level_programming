#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
