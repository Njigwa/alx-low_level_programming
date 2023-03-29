#include <stdio.h>
/**
 * main - A program that prints alphabetical letters in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
