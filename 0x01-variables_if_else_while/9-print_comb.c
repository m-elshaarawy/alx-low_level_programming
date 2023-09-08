#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print 0 -> 9 nums
 *
 * Return: 0
 */

int main(void)
{
	int ch = 0 + '0';

	while (ch <= '9')
	{

		putchar(ch);

		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');

return (0);
}
