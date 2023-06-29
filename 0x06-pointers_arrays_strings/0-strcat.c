#include <main.h>

/**
 * _strcat - concatenate string
 * @dest: input value
 * @src: input value
 *
 * Return: void
 *
 */
char *_strcat(char *dest, const char *sr)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

		*dest = '\0';

	return (result);
}
