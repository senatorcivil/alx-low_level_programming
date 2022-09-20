#include "main.h"
/**
 * _puts - prints a string, followed by a line
 * @str: test code
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
