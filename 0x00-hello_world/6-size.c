#include <stdio.h>
/**
 * main - A program that prints a size of various data types 
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an integer is: %lu./n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu./n", (unsigned long)sizeof(d));
	printf("The size of a character is: %lu./n", (unsigned long)sizeof(c));

	return (0);
}
