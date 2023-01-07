#include "main.h"
/**
 *_isalpha - checks for alphabetical characte either upper or lowercase
 *@c: the character
 *
 *Return: 1 if the character is a letter, print 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}


