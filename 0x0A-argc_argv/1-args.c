#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of args
 * @argc: argument to count
 * @argv: argument to vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
