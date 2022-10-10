#include <stdio.h>

int main()
{
    int num, fat = 1;

    printf("numero: ");
    scanf("%d", &num);

    for (num; num > 1; num--)
    {
        fat *= num;
    }

    printf("fattoriale -> %d\n", fat);

    return 0;
}

/* int fattoriale(int n);

int main()
{
    int num, fat;

    printf("numero: ");
    scanf("%d", &num);

    fat = fattoriale(num);

    printf("fattoriale -> %d\n", fat);

    return 0;
}

int fattoriale(int n)
{
    if (n == 0)
        return 1;

    return n * fattoriale(n - 1);
} */