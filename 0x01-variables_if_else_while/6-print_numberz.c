#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}


