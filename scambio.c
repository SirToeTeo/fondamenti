#include <stdio.h>

#define N 50

void scambioLettere(char *dest, char *lettere, int p_o_d);

int main()
{
    char dest[N] = "parolalunga";
    char lettere[N] = "LET";
    int p_o_d = 0;

    printf("%s\n", dest);

    scambioLettere(dest, lettere, p_o_d);

    printf("%s\n", dest);

    return 0;
}

void scambioLettere(char *dest, char *lettere, int p_o_d)
{
    int i = 0, j = 0;

    while (dest[i] != '\0' && lettere[j] != '\0')
    {

        if ((i + p_o_d) % 2)
            dest[i] = lettere[j++];

        i++;
    }
}

/*
controllo se è dispari sempre

                    0 1 2 3 4 5

pod = 0 -> pari     0 1 2 3 4 5
                    0 1 0 1 0 1

pod = 1 -> dispari  1 2 3 4 5 6
                    1 0 1 0 1 0

 */