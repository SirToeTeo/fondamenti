#include <stdio.h>
#include <string.h>

#define N 50

int strcomp(char *, char *, int);

int main()
{
    char s1[N] = "ciaone";
    char s2[N] = "ciaone";

    int c = strcomp(s1, s2, 0);

    printf("%d\n", c);

    return 0;
}

int strcomp(char *s1, char *s2, int i)
{
    if (strlen(s1) != strlen(s2))
        return 0;
    if (i >= strlen(s1))
        return 1;
    if (s1[i] == s2[i])
        return strcomp(s1, s2, ++i);
    else
        return 0;
}