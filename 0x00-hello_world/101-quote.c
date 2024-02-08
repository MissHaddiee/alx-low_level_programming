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
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, 60);

	return (1);
}
