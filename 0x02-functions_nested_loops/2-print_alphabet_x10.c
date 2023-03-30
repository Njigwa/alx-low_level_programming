#include "main.h"
/**
 * main - A function that prints ten times the alphabet in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int x;
	char y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
