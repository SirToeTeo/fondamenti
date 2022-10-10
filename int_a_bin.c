#include <stdio.h>

/* int main()
{
    int numero_dec, numero_bin = 0, num, resto, base = 1;

    printf("numero da convertire: ");
    scanf("%d", &numero_dec);
    num = numero_dec;

    while (num != 0)
    {
        resto = num % 2;
        numero_bin += (resto * base);

        base *= 10;
        num /= 2;
    }

    printf("numero binario: %d\n", numero_bin);

    return 0;
} */

/* leggermente più ordinato */

int int_a_bin(int num);

int main()
{
    int numero_dec, numero_bin;

    printf("numero da convertire: ");
    scanf("%d", &numero_dec);

    numero_bin = int_a_bin(numero_dec);

    printf("numero binario: %d\n", numero_bin);

    return 0;
}

int int_a_bin(int num)
{
    int resto, risultato = 0, base = 1;

    while (num != 0)
    {
        resto = num % 2;
        risultato += (resto * base);

        base *= 10;
        num /= 2;
    }

    return risultato;
}
