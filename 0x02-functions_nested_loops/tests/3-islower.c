#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}

int _islower(int c)
{
    if(c >= 'a' && c<= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}