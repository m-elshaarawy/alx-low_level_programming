#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print alphabet
 *
 * Return: 0
 */

int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		if (ch != 'q' && ch != 'e')
		putchar(ch);

		ch++;
	}
	putchar('\n');

return (0);
}
