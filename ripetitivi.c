#include <stdio.h>

int main()
{
    int num, r, i = 0, j, rip = 0;
    int cifre[10];

    printf("numero: ");
    scanf("%d", &num);

    while (num != 0 && rip == 0)
    {
        r = num % 10;
        num -= r;
        num /= 10;

        for (j = 0; j < i; j++)
        {
            if (cifre[j] == r)
            {
                printf("ripetitivo");
                rip = 1;
            }
        }

        cifre[i] = r;
        i++;
    }

    return 0;
}