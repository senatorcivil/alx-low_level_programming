#include "main.h"
/**
 * _strcpy - copies the string pointed to by src,
 * @dest: test code
 * @src: test code
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}