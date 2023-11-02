#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, i = 0, j = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (l1 = 0; s1[l1]; l1++)
		;
	/*for (l2 = 0; s2[l2]; l2++)*/

	str = malloc(l1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] ; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
