# include <stdlib.h>
# include <time.h>
# include <stdio.h>

/**
 * main - this is the main function
 * Description: Checks if a value a rnadom value is positive or negative
 *
 * Return: return 0 (default)
 */
int main(void)
{
	/* this is the n declaration */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}

