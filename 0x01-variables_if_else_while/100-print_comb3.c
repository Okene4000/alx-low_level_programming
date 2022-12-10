#include <stdio.h>
/**
 * main - prints all possible different combinations of two numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (!(a == b) || (b > a))
			{
				putchar(a);
				putchar(b);
				if (!(a == 9 && b == 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
