#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    printf("numero: ");

    scanf("%d", &a);

    int i;
    int j;

    for (i = 1; i < a; i++)
    {
        for (j = i; j < a; j++)
        {
            int p = pow(i, 2) + pow(j, 2);
            if (p == a)
                printf("%d^2+%d^2=%d ", i, j, a);
        }
    }

    return 0;
}