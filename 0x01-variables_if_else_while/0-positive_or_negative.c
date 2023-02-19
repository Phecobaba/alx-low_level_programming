#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 )
{
		printf("%d\n" is positive);
}

	if( n == 0 ){
		printf("%d\n" is zero);
}
	if( n < 0 ) {
		printf("%d\n" is negative);
}			
	return (0);
}
