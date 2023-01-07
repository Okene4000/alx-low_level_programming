#include "main.h"
#include <unistd.h>
/**
 * _putchar - putchar
 * @c: character
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
