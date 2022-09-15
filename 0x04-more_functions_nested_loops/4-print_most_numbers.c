#include "main.h"

/**
 * print_most_numbers - prints 0-9 in ASCII form
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int character = '0';

	while (character <= '9')
	{
		if (character != '2' && character != '4')
		{
			_putchar(character);
		}
		character++;
	}
	_putchar('\n');
}
