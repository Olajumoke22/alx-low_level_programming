#include "main.h"
#include <string.h>

/**
 *  _strlen - return the length of string
 *  @s: String to find the length
 *  Return: length of a string.
 */
int _strlen(char *s)
{
	int letter_count;

	for (letter_count = 0; s[letter_count] != '\0'; letter_count++);
	return (letter_count);
}
