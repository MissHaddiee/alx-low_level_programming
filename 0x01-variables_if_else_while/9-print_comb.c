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



	for (i = 10; i < 20; i++)

	{

		putchar((i % 10) + '0');

		if (i != 19)

		{

			putchar(',');

			putchar(' ');

		}

	}

	putchar('\n');

	return (0);

}
