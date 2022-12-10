#include <stdio.h>
/**
 * main - print  number seperated by commas and space
 *
 * Return: 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(48 + num);
		if (num <= '8')
		{
			putchar(',');
			putchar(' ');
		}
			num++;
	}
	putchar('\n');
	return (0);
}

