#include "main.h"
/*
 * _strcat - concatenates two srings
 * @dest: string to be joined
 * @src: string to be concantenated upon
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
