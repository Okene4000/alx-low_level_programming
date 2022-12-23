#include "main.h"

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - adds the number stored in two strings
 * @n1: The string containing the first number to be added.
 * @n2: the string containing the second number to be added.
 * @r: the buffer to store the result
 * @r_index: the current index of the buffer
 *
 * Return: if r can store the sum - a pointer to the result.
 *         if r cannot store the sum - 0
 */

char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2 --, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + 10;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + 10;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && r_index >= 0)
	{
		*(r + r_index) = (num % 10) + '0';
	return (r + r_index);
	}
	else if (tens && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the  buffer to store the result
 * @size_r: the buffer size
 *
 * Return: if r can store the sum - a pointer to the result
 *         if r cannot store the sum - 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;
	
	for (index = 0; *(n2 + index); index++)
		n2_len++;
	
	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
