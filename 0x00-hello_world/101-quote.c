#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that uses write to print
 *
 * Return: 1
*/

int main(void)
{
	char buf[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, buf, 59);

	return (1);
}
