#include "main.h"
/**
 **_strcpy - unction that copies the string pointed to by src
 *@dest:assigned
 *@src: assigned
 *
 *Return: the return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
