#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * num - variable to be assigned values
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; ++num)
	{
		if (num < 9)
		{
			putchar(num + '0');
			if (num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
