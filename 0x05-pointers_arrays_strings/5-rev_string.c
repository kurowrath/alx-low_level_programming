#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: input parameter
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int l, i;
	char temp;
	/*fidn a string lenght without a null character*/
	for (l = 0; s[l] != '\0'; ++1);

	/*swap the string by looping around the half string*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1- i ];
		s[l - 1 - i] = temp;
	}
}

