#include <stdio.h>

#define N 10

typedef struct
{
    char titolo[N];
    float prezzo;
} Libro;

typedef struct
{
    int nums[N];
} Wrap;

void doppio(int *);
void doppio_array(int *, int n);
void print_array(int[]);
void shift_string(char *, int);

Libro molt_prezzo(Libro, float);
void raddoppia_prezzo(Libro *);

Wrap crea_array();

int main()
{
    printf("%d\n", crea_array().nums[0]);

    return 0;
}

Wrap crea_array()
{
    Wrap a = {
        {1, 2, 3}};

    return a;
}

void raddoppia_prezzo(Libro *lb)
{
    lb->prezzo *= 2;
}

Libro molt_prezzo(Libro lb, float f)
{
    lb.prezzo *= f;
    return lb;
}

void shift_string(char *str, int shift)
{
    int i = 0;

    while (str[i] != '\0')
    {
        str[i++] += 1;
    }
}

void print_array(int ar[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%d ", *(ar + i));
    }
}

void doppio_array(int *ar, int n)
{
    int i = 0;

    while (i < n)
    {
        *(ar + i++) *= 2;
    }
}

void doppio(int *n)
{
    (*n) *= 2;
}