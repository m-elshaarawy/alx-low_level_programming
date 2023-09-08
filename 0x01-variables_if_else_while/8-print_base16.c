#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints
 * all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch = 0 + '0';
	char al = 'a';

	while (ch <= '10')
	{
		putchar(ch);
		ch++;
	}

	while (al <= 'f')
	{
		putchar(al);
		al++;
	}
	putchar('\n');

return (0);
}
