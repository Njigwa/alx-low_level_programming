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

		printf("%d Last digit of n is greater than 5\n", n);

	else if (n == 0)

		printf("%d Last digit of n is 0\n", n);

	else if (n <= 6)

		printf("%d Last digit of n is less than and not 0\n", n);
	return (0);
}
