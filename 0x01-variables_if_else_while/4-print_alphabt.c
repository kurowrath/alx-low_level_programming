#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: a program that prints alphabet lowercase excep'q' and 'e'
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c !='e' && c !='q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
return (0);
}
