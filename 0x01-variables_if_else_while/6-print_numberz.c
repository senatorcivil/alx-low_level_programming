#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * You are not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');
	return (0);
}
