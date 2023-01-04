#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: x10 a-z
*/
void print_alphabet_x10(void)
{
	int i, c;

	for (i = 0; i < 10; ++i)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
		_putchar('\n');
	}
}
