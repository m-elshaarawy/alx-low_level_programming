#include "main.h"

/**
 * strtow -  splits a string into words.
 * @str: string of words
 * Return:  pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	int wc = 0, i = 0, j = 0, z = 0, w = 0;
	char **ws;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = wcount(str);
	if (wc == 1)
		return (NULL);
	ws = (char **) malloc(wc * sizeof(char *));
	if (ws == NULL)
		return (NULL);
	ws[wc - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			ws[w] = (char *) malloc(j * sizeof(char));
			j--;
			if (ws[w] == NULL)
			{
				for (i = 0; i < wc; i++)
					free(ws[i]);
				free(ws);
				return (NULL);
			}
			for (z = 0; z < j; z++)
			{
				ws[w][z] = str[i + z];
			}
			ws[w][z] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (ws);
}

/**
 * wcount - counts number of words
 * @str: string of words
 * Return: number of words
 */


int wcount(char *str)
{
	int c = 0, i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}
