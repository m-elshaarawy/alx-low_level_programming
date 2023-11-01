#include "main.h"

/**
 * argstostr -concatenates all the arguments of your program.
 * @ac: argc
 * @av: argv
 * Return: arr of chars
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, z = 0, len = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);

	while (i < ac)
	{
		len += _strlen(av[i]);
		len++;
		i++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == 0)
		return (NULL);
	
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] ; j++, z++)
		{
			str[z] = av[i][j];
		}
		str[z] = '\n';
		z++;
	}
	str[z] = '\0';
	return (str);

}

/**
 * _strlen - returns the length of a string
 * @s: array of char
 * Return: length
*/

int _strlen(char *s)
{
        int i;

        if (s == 0)
                return (0);

        for (i = 0; s[i]; i++)
        {}
        return (i);
}
