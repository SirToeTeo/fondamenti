#include <stdio.h>

void prova();

int main()
{
    prova();
    prova();
    return 0;
}

void prova()
{
    static int a = 0;
    printf("%d\n", a++);
}