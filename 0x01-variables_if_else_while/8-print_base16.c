#include <stdio.h>



/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */


int main(void)

{

	int n = 48;

	int l = 'a';

	while (n <= 57)

	{

		putchar(n);

		n += 1;

	}

	while (l <= 'f')

	{

		putchar(l);

		l++;

	}

	putchar('\n');

	return (0);

}
