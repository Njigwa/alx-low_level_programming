#include "main.h"
/**
 * print_last_digit - A function that prints the last digit
 *
 * @x: Parameter function
 *
 * Return: i (Success)
 */
int print_last_digit(int x)
{
	int i;

	i = x % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
