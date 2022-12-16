#include "main.h"
/**
 * main - entry
 *
 * Return; 0
 */
int main(void)
{
	int i=0; /* initialize i */

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
