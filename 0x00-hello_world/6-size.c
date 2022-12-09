#include <stdio.h>
/**
 * main - program prints size of various types
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	long int I;
	long long int II;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(I));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(II));
	printf("size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
