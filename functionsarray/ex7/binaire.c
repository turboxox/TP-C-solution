#include <stdio.h>
#include <stdlib.h>

int *EntierToBinaire(int entier)
{
    int n = 8;
    int *t = NULL, *p;
    t = (int *)calloc(n, sizeof(int));
    p = t + n - 1;
    while (entier != 0)
    {
        *p = entier % 2;
        entier /= 2;
        p--;
    }
    return t;
}

int main()
{
    int *t = NULL;
    int entier = 5;
    int i;
    t = EntierToBinaire(entier);
    for (i = 0; i < 8; i++)
    {
        printf("%d ", *(t + i));
    }
}