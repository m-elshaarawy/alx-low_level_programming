#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it.
 * @argc: int
 * @argv: arr of chars
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
