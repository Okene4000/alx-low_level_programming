#include <stdio.h>
/**
 * main - program prints size of various types
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int I;
	long long int II;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) Sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) Sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) Sizeof(I));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) Sizeof(I));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) Sizeof(f));
	return (0);
}
