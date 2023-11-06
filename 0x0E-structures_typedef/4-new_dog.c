#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - main function.
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog owner's name.
 *
 * Description: This function creates a new dog.
 *
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->name = _strdup(name);

	if (name && !p->name)
	{
		return (free(p), NULL);
	}

	p->age = age;

	p->owner = _strdup(owner);

	if (owner && !p->owner)
	{
		return (free(p->name), free(p), NULL);
	}

	return (p);
}

/**
 * *_strdup - main function.
 * @str: Pointer to the string to duplicate.
 *
 * Description: This function copy a string to a newly allocated
 * space in memory.
 *
 * Return: The pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int size = 0;
	char *p;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	p = malloc(sizeof(char) * size + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	_strcpy(p, str);

	return (p);
}


/**
 * *_strcpy - main function.
 * @src: The source.
 * @dest: The destination.
 *
 * Description: This function copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
