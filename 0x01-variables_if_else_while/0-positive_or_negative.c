#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *comments
 comments
 */

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)

{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is posistive\n"
, n);
	else if ( < 0)
		printf("%d is negative\n"
, n);
	else
		printf("%d is zero\n"
	
/* your code goes there */

	return (0);

}