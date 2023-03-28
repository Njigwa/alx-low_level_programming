#include <stdio.h>
/**
 * main - A program that prints alphabetical letters in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0 ; x < 26 ; x++)
		putchar(alp[x]);
		putchar ('\n');
	return (0);
}
