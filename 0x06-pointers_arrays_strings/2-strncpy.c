#include "main.h"

/**
 * _strncpy - coping a string
 * @dest: input value
 * @src: input valuie
 * @n: input value
 *
 * Return: void
 *
 */
char *_strncpy(char *dest, char *src, int n)
{

	int j;

	j = 0;

	while
		(j < n && src[j] != '\0');
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
