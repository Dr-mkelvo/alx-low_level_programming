#include <stdio.h>

/**
* main - #Task: Print alphabets in lowercase in reverse(z-a)
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
