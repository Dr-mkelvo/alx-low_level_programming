#include <stdio.h>
void print_alphabet_x10(void);

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
void print_alphabet_x10(void)
{
    int a;
    char letter;

    for (a = 0; a <10; a++ )
    {
        for(letter = 'a'; letter <= 'z'; letter++)
        {
            putchar(letter);
        }
        putchar('\n');
    }

}