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
	if (x < 0)
	{	i = -i;
		_putchar(i + '0');
	}	
	return (i);

}
