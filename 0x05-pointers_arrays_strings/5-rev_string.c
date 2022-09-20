#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: test code
 * Return: 0
 */
void rev_string(char *s)
{
	char *t = s;
	char n[1000];
	short d = 0;

	while (*s != '\0')
	{
		n[d] = *s;
		s++;
		d++;
	}
	d = 0;

	while (s > t)
	{
		s--;
		*s = n[d];
		d++;
	}
}
