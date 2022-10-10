#include <stdio.h>

int main()
{
    int num;

    printf("Number: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
        case 2:
            printf("WOW");
            break;
        default:
            printf("NICE");
    }
}