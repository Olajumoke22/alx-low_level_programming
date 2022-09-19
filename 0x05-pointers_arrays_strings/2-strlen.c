#include "main.h"
#include <string.h>

/**
 *  _strlen - return the length of string
 *  @s: String to find the length
 *  Return: length of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
