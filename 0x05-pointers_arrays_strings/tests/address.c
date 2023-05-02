#include <stdio.h>
int main(void)
{
    int *ptr, c, d;
    c = 80;
    d = 98;
    ptr = &c;
    printf("%d\n",c);
    ptr = &d;
    printf("%d\n",d);
    return (0);
}