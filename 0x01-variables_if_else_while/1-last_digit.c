#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)      
                printf("%d is greater than 5: \n", n)
        else if (n==0)          
                printf("%d is 0: \n", n)                
        else (n < 6)    
                printf("%d is less than and not 0: \n", n)   
	return (0);
}
