#include "main.h"

/**
 * infinite_add -  adds two numbers
 * @n1: number 1
 * @n2: number 2
 * @r:the buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_l = 0, n2_l = 0, l = 0, i = 0;
	int c = 0, N1 = 0, N2 = 0;

	while (n1[n1_l])
	{
		n1_l++;
	}
	while (n2[n2_l])
	{
		n2_l++;
	}
	if (n1_l > n2_l)
		l = n1_l;
	else
		l = n2_l;
	if (l + 1 > size_r)
		return (0);

	r[l] = '\0';

	for (i = l - 1; i >= 0; i--)
	{
		n1_l--;
		if (n1_l >= 0)
			N1 = n1[n1_l] - '0';
		else
			N1 = 0;
		n2_l--;
		if (n2_l >= 0)
			N2 = n2[n2_l] - '0';
		else
			N2 = 0;

		r[i] = (N1 + N2 + c) % 10 + '0';
		c = (N1 + N2 + c) / 10;
	}

	if (c == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
		{
			r[l + 1] = r[l];
		}
		r[0] = c + '0';
		
	}

	return (r);
}
