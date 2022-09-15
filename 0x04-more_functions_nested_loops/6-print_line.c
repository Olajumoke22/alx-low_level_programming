#include "main.h"

/**
 * print_line - prints line in the terminal
 * @n: times straight line is printed.
 * Description: prints n number of lines in the terminal
 * Return: no return.
 */
void print_line(int n)
{
	int linecount;

	linecount = 0;
	while (linecount < n)
	{
		_putchar('_');
		linecount++;
	}
	_putchar('\n');
}
