#include "main.h"
/**
 * *_memcpy - function that copies memory area
 * @dest: source string
 * @src: string for the filling
 * @n: length of the buffer
 * Return: new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
