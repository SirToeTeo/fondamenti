#include <stdio.h>

int moltiplicazione_cifre (int x)
{   
    int resto, prodotto_temp = 1;

    while (x != 0)
    {
        resto = x % 10;
        x -= resto;
        x /= 10;
        prodotto_temp *= resto;
    }

    return prodotto_temp;
}

int main ()
{
    int a, b, somma, prodotto;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    prodotto = moltiplicazione_cifre(a) * moltiplicazione_cifre(b);

    somma = a + b;

    printf("I numeri %d e %d ", a, b);

    if (somma != prodotto)
        printf("non ");

    printf("sono affini\n");

    return 0;
}


