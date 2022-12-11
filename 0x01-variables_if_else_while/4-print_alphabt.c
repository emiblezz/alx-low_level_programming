#include <stdio.h>

/**
 * main - print lowercase alpha from a to z but don't include q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter.replace('q'||'e'," "));
		letter++;
	}
	putchar('\n');

	return (0);
}
