#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * 	starting with the first character, followed by a new line.
 *
 * @str: input parameter
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i;
		for (i = 0 ; i < sizeof(*str)/sizeof(*str[0]); i++)
	{
		printf("%lf\n",*str[i]);
	}
}

