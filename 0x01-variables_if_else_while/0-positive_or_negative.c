#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: checking if n is positive or negative 
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0){
		printf("%dis positive",n);
	}
	else if (n == 0){
		printf("%dis zero",n);
	}
	else {
		printf("%dis negative,",n);
	}
	return (0);
}
