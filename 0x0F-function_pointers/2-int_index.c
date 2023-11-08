#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: arr
 * @size: size
 * @cmp: pointer to function
 * Description: N/A
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
