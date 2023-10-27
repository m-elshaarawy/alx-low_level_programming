#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: int
 * @argv: arr of chars
 * Return: 0
*/

int main(int argc, char const *argv[] __attribute__((unused)))
{
	printf("%s\n", argc - 1);
	return (0);
}
