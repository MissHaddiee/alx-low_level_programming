/**
 * main - Assigns a random number to the variable n
 * each time it is executed
 *
 * n - variable to be assigned to
 *
 * Return: Always 0 (Success)
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_n = n % 10;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_n);
	}
	return (0);
}
