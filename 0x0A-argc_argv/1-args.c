#include "main.h"
#include <stdio.h>

/**
 * main - printing number of argument passed
 * @argc: argument count
 * @argv: argument count
 * Return: Always 0
 *
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
