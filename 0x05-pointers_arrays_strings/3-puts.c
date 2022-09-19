#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str: pointer to clear
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
