#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: checks if it is a letter, lowercase or uppercase
 * Return: always 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
