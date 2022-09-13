#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lowercase from a-z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
