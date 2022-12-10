#include <stdio.h>
/**
 * main - print  number seperated by commas and space
 *
 * Return: 0
 */
int main(void)
{
	int num = '0';

	while (num < 10)
	{
		putchar(48 + num);
		if (num < '9')
		{
			putchar(',');
			putchar(' ');
		}
			num++;
	}
	putchar('\n');
	return (0);
}

