#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is", n);
	if (n > 5)
	{
		printf("%d is and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is and is 0\n", n);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
