#include <stdio.h>
/**
 * main - A program that prints a size of various data types 
 *
 * Return: 0 (Success)
 */
int main(void)
{
	
	printf("The size of a char is: %lu\n byte(s)", sizeof(char));
	printf("The size of an int is: %lu\n byte(s)", sizeof(int));
	printf("The size of a long int is: %lu\n byte(s)", sizeof(long int));
	printf("The size of a long long int is: %lu\n byte(s)", sizeof(long long int));
	printf("The size of a float is: %lu\n byte(s)", sizeof(float));
	
	return (0);
}
