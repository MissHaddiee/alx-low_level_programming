#include <stdio.h>
/**
 * main - Prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * hex - variable to be assigned values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hex;

	for (hex = 0; hex <= 9; ++hex)
	{
		putchar(hex + '0');
	}
	for (hex = 'a'; hex <= 'f'; ++hex)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
