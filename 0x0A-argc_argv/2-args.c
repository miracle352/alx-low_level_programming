#include "main.h"
#include <stdio.h>

/**
 * main - printing all arguments it recieves
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argv; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
