#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *@size:the size of the triangle
 * Return: void
*/

void print_triangle(int size)
{
		int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > 0; j--)
		{
			_putchar('#');
		}

		for (j = i; j < size; j++)
		{

			_putchar('#');
		}
		_putchar('\n');
	}
}
