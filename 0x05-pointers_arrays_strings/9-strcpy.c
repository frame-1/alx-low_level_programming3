#include "main.h"
/**
 * _strcpy - check the code.
 * @dest: a pointer to destination of string.
 * @src: a pointer to source string to copy from
 * Return: the pointer to dest
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
