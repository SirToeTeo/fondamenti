#include <stdio.h>
#include <string.h>
#include <math.h>

#define L 11

void dec_a_base(int num, int base);
int base_valida(int base, char numero[]);

int main()
{
    char numero_input[L];
    int base_input, i, j, numero_10 = 0, base_output, p, bv;

    printf("numero input << ");
    scanf("%s", numero_input);

    printf("base input << ");
    scanf("%d", &base_input);

    bv = base_valida(base_input, numero_input);

    if (!bv)
    {
        printf("base non valida");
        return 0;
    }

    printf("base output << ");
    scanf("%d", &base_output);

    for (i = 0, j = (strlen(numero_input) - 1); i < strlen(numero_input); i++, j--)
    {
        p = pow(base_input, j);
        numero_10 += p * (numero_input[i] - '0');
    }

    dec_a_base(numero_10, base_output);

    return 0;
}

int base_valida(int base, char numero[])
{
    int i, n, max;

    max = numero[0] - '0';

    for (i = 1; i < strlen(numero) - 1; i++)
    {
        n = numero[i] - '0';

        max = (n > max) ? n : max;
    }

    return (base > max);
}

void dec_a_base(int num, int base)
{
    char cifre_contrario[L * 2 + 1];
    char cifre_ordine[L * 2 + 1];
    int resto, i = 0, j = 0;

    while (num != 0)
    {
        resto = num % base;

        cifre_contrario[i++] = resto + '0';

        num /= base;
    }

    for (i = strlen(cifre_contrario) - 1, j = 0; i >= 0; i--, j++)
    {
        cifre_ordine[j] = cifre_contrario[i];
    }

    printf("numero in base %d >> %s\n", base, cifre_ordine);
}