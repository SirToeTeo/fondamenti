#include <stdio.h>

int tartaglia(int, int);

int main()
{
    int r, c, R;

    printf("righe da stampare: ");
    scanf("%d", &R);
    printf("\n");

    for (r = 0; r < R; r++)
    {
        for (c = 0; c <= r; c++)
        {
            printf("%d ", tartaglia(r, c));
        }
        printf("\n");
    }

    printf("\n");
}

int tartaglia(int r, int c)
{
    if ((r == c) || (c == 0))
        return 1;
    return tartaglia(r - 1, c - 1) + tartaglia(r - 1, c);
}