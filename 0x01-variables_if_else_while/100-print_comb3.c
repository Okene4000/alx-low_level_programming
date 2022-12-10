#include <stdio.h>
/**
 * main - prints all possible different combinations of two numbers
 *
 * Return: 0
 *
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/* print tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/* print ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/* eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))
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
