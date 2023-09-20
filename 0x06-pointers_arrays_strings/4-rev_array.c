#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: pointer to int
 * @n: input int
*/

void reverse_array(int *a, int n)
{
	int i = 0, temp = 0;
	int l = n - 1;

	for (i = 0 ; i < l / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[l - i];
		a[l - i] = temp;
	}

}
