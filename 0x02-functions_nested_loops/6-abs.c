#include "main.h"

/**
 * _abs - prints abs of a number
 *
 * @n: checks input of a function
 *
 * Return: Returns the value of the abs value of n
*/

int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = n * -1;
	}
	else
	{
		r = n;

	}
	return (r);
}
