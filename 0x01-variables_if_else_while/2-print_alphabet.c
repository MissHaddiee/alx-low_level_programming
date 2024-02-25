/**
 * main - Prints tthe alphabet in lowercase
 *
 * alphabet - variable to be assigned to
 *
 * Return: Always 0 (Success)
 */
#include<stdio.h>

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
