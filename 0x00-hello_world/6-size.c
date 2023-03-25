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
	long int e;
	long long int g;
	float f;
	
	printf("The size of an integer is:lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a character is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long integer is: %l.\n", (unsigned long)sizeof(e));
	printf("The size of a long long integer is: %llu.\n", (unsigned long)sizeof(g));
	printf("The size of a float is: %f.\n", (unsigned long)sizeof(f));
	
	return (0)
}
