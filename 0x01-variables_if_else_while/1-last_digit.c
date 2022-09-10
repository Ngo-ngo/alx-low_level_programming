#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return 0
 */
int main(void)
{
	int n;
	int ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_number = n % 10;

	if (ln > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, ln);
	else if (ln == 0)
		printf("Last digit of %i is %i and is 0\n", n, ln);
	else if(ln < 6)
		printf("Last digit of %i is %i and is less than 6\n", n, ln);

	return (0);
}
