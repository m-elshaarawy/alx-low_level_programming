#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that print different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int ch = 0, ch2;

	while (ch <= 99)
	{
		ch2 = ch;
		while (ch2 <= 99)
		{
			if (ch2 != ch)
			{
				putchar(((ch / 10) + '0'));
				putchar(((ch % 10) + '0'));
				putchar(' ');
				putchar(((ch2 / 10) + '0'));
				putchar(((ch2 % 10) + '0'));

				if (ch != 98 || ch2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			ch2++;
		}
		ch++;
	}
	putchar('\n');

return (0);
}
