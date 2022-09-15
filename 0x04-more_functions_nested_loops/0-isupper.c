#include "main.h"

/**
 * _isupper - checks to see if character is in upper case
 * @c: character to be checked
 * Description: checks to see if character is in upper case
 * Return: 0 or 1 to signify true or false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
