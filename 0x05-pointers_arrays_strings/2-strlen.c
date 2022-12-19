#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
