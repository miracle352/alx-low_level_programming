#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		HEAD
		m = n % * -1;

		m = n * -1;
8f3151ba401685624dc74c67959ef240c54b2491
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
 HEAD
		d /= 10;;
		count *= 10;
	}
	for (; count >= 1; count /=10)
	{
		_putchar(((m / count) % 10)+48)
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
>>>>>>> 8f3151ba401685624dc74c67959ef240c54b2491
	}
}
