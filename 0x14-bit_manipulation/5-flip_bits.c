#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the number
 * @m: number to flip n to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits = bits + (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
