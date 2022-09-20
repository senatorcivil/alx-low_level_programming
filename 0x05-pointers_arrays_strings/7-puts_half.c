#include "main.h"
/**
 * puts_half - prints half of a string, followed
 * by a new line
 * @str: test code
 * Return: 0
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	if (j % 2 != 0)
		j = (j + 1) / 2;
	else
		j /= 2;
	while (j < i)
	{
		j++;
		_putchar(*(str + j - 1));
	}
	_putchar('\n');
}
