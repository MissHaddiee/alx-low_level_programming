/**
 * main - Prints the size of various types on a 64-bit computer
 *
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %li byte(s)", sizeof(char));
	printf("Size of an int: %li byte(s)", sizeof(int));
	printf("Size of a long int: %li byte(s)", sizeof(long int));
	printf("Size of a long long int: %li byte(s)", sizeof(long long int));
	printf("Size of a float: %li byte(s)", sizeof(float));

	return (0);
}
