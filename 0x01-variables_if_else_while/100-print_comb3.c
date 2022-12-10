#include <stdio.h>
/**
 * main - prints all possible different combinations of two numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int a = '0';
	int b = '0';

	for (a = '0'; a <= '9'; a++)/* prints ones digit*/
	{
		for (b = '0'; b <= '9'; b++)/* prints tens digit*/
		{
			if (!((a == b) || (b > a)))/* eliminates repitition*/
			{
				putchar(a);
				putchar(b);
				if (!(a == '9' && b == '8'))
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
