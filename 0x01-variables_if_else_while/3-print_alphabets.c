#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* lowercase */
	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	/* UPPERCASE */
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
