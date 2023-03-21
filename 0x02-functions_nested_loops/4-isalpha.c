#include "main.h"
/**
 * _isalpha - check if character is alpha
 *
 * @c: checks input of a function
 *
 * Return: returns 1 if c is alpha, otherwise 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || ( c >= 97 && c <= 122))
	{
		return (1);
	}
return (0);
}
