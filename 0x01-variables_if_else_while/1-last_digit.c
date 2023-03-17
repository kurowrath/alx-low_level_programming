#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print the last digit of the number stored in the variable n
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lstDgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstDgt = n % 10;
	if (lstDgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstDgt);
	}
	else if (lstDgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstDgt);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lstDgt);
	}
	return (0);
}
