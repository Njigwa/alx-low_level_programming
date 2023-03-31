#include "main.h"

/**
 * jack_bauer - prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
	int j, k, l, m;

	for (j = 0; j <= 2; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			for (l = 0; l <= 5; l++)
			{
				for (m = 0; m <= 9; m++)
				{
					if (j >= 2 && k >= 4)
						break;
					_putchar(j + 48);
					_putchar(k + 48);
					_putchar(50);
					_putchar(l + 48);
					_putchar(m + 48);
					_putchar('\n');
				}
			}
		}
	}
}
