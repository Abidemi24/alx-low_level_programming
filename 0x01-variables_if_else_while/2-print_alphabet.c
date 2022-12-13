#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
