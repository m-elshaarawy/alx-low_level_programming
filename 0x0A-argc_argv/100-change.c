#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money
 * @argc: int
 * @argv: arr of chars
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, lcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0 ; i < 5 ; i++)
		{
			if (money >= cents[i])
			{
				lcents += money / cents[i];
				money %= cents[i];

				if (money % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		return (printf("Error\n"), 1);
	}
	return (0);
}
