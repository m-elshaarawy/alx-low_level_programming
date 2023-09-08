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
	int y = 0;

	while (ch <= '9')
	{
		if (ch == '9')
		{
			y = '$';
		}
		else
		{
			y = ',';
		}
		putchar(ch);
		putchar(y);
		putchar(' ');
		ch++;
	}
	putchar('\n');

return (0);
}
