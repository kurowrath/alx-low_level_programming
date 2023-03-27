#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0).
 *
 * @dest: input parameter
 * @src: input parameter
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\n');

	return (dest);
}

