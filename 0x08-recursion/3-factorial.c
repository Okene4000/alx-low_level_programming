#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * @Return: return -1 if n is lower than zero
 *                 0 if n is equal to zero
 *                 factorial
 */

int factorial(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
