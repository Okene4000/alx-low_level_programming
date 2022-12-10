#include <stdio.h>
/**
 * main - print number 0-9 seperated by commas and space
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	if (num != '9')
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

