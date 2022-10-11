#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    int voti[N];
    int i, j, max;
    char c;

    /* randomizza gli elementi */

    for (i = 0; i < N; i++)
    {
        voti[i] = rand() % 10 + 1;
    }

    max = voti[0];

    /* trova il massimo */

    for (i = 0; i < N; i++)
    {
        max = (voti[i] > max) ? voti[i] : max;
    }

    /* stampa gli asterischi dall'alto verso il basso*/

    for (i = max; i > 0; i--)
    {
        for (j = 0; j < N; j++)
        {
            c = (voti[j] >= i) ? '*' : ' ';
            printf("%c  ", c);
        }

        printf("\n");
    }

    for (i = 0; i < N * 3; i++)
    {
        printf("-");
    }

    printf("\n");

    /* stampa i numeri */

    for (i = 0; i < N; i++)
    {
        printf("%-2d ", voti[i]);
    }

    return 0;
}