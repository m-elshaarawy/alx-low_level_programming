#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of buffer
 * @c: char to print
 * Return:pointer to char
*/

char *create_array(unsigned int size, char c)
{
	char *x = (char *) malloc(size);

	if (x == 0 || size == 0)
	{
		return (0);
	}

	while (size--)
	{
		x[size] = c;
	}

	return (x);
}
