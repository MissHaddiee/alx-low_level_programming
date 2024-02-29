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

	int i;



	for (i = 0; i < 10; i++)

	{

		putchar(i + '0');

		if (i != 9)

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
