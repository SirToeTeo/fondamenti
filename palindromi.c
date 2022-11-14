#include <stdio.h>
#include <string.h>

#define N 50

int palindromi(char *);

int main()
{
    char parola[N] = "avallava";

    printf("%s ", parola);

    if (!palindromi(parola))
        printf("non ");

    printf("e un palindromo.");

    return 0;
}

int palindromi(char *stringa)
{
    int i, j, l = strlen(stringa);

    for (i = 0; i < (l - 1) / 2; i++)
    {
        j = l - i - 1;
        if (stringa[i] != stringa[j])
            return 0;
    }

    return 1;
}