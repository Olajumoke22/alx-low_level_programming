#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy source string to a destination sting
 * @dest: string to copy to
 * @src: string to copy from
 * Return: the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
