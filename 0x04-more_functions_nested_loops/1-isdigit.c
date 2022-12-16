#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: input
 * Return: 1 if c i a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
