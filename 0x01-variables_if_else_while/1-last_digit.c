#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program will assign a  random number to variable n
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)

		printf("Last digit of n is n and is greater than 5: %d\n", n);

	else if (n == 0)

		printf("Last digit of n is n and is 0: %d\n", n);

	else if (n <= 6)

		printf("Last digit of n is n less than 6 and not 0: %d\n", n);
	return (0);
}
