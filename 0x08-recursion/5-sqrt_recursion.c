#include "main.h"
/**
 * _evaluate - evaluate function squareroot
 * @i: integer
 * @n: integer
 * Return: evaluate squareroot
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (0);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: squareroot recursion
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate(i, n));
	}
}
