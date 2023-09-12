#include "main.h"

/**
* main - Entry point
*
* Description: a function that uses Write
* to print chars
*
* Return: 0
*/

int main(void)
{
	char str[] = "_putchar";

	int i = 0;

	for (i = 0; str[i] ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
