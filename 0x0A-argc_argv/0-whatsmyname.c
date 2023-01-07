#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: arguments
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
