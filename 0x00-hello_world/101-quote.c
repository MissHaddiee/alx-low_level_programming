/**
 * main - Prints \"and that piece of art is useful\" - Dora Korpar, 201
 * 5-10-19\"
 *
 * Return: 1
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
