#include <stdio.h>

/**
 * main - prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}
