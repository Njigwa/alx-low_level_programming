#include <stdio.h>
/**
 * main - A program that prints all single digit numbers of base ten
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 0; x < 10 ; x++)
		printf("%d", x);
	putchar('\n');
	return (0);
}
