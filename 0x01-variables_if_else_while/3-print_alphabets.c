#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase and uppercase
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}

