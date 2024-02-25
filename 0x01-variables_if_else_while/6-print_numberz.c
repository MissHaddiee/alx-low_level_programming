#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * num - variabble to be assigned to
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}

