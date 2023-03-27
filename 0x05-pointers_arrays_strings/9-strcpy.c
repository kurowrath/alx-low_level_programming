#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *	including the terminating null byte (\0).
 *
 * @dest: input parameter
 * @src: input parameter
 * Description: copy the string pointed to by pointer
 * Return: Poinyer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

