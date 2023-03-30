#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (x = y + 1; y <= 99; y++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(' ');
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			if (x == 98 && y == 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
