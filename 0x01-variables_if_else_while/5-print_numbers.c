#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing single digits 0-10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int dj = 0;

	while (dj <= 9)
	{
		printf("%d", dj);
		dj++;
	}
	putchar('\n');
return (0);
}
