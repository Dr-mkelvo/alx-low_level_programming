

#include <stdio.h>

/**
* main - Entry point #Task to print alphabets in lowercase, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'e' && a != 'q')
	putchar(a);
	}
	putchar('\n');

	return (0);
}
