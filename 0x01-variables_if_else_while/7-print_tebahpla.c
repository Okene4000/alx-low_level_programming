#include <stdio.h>
#include <stdio.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
