#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    int voti[N];
    int i, j;

    for (i = 0; i < N; i++)
    {
        voti[i] = rand() % 10 + 1;
    }

    for (i = 0; i < N; i++)
    {
        printf("%d ", voti[i]);

        for (j = 0; j < voti[i]; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}