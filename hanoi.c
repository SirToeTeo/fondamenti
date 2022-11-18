#include <stdio.h>

void hanoi(int, char, char, char);

int main()
{
    int n;

    while (1)
    {
        printf("Plates to be moved: ");
        scanf("%d", &n);
        hanoi(n, 'A', 'C', 'B');
    }

    return 0;
}

void hanoi(int n, char from, char to, char by)
{
    if (n == 0)
        return;

    hanoi(n - 1, from, by, to);
    printf("Move disc %d from %c to %c\n", n, from, to);
    hanoi(n - 1, by, to, from);
}