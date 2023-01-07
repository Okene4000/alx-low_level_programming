#include <stdio.h>
#include "main.h"

/**
 * main -  prints the number of arguments passed into it
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
