#include <stdio.h>

int main()
{
    int tab[32] = {0};
    int i;
    int j;
    int n;
    int nombre;
    int reste;
    printf("saisie un entier:");
    scanf("%d", &n);
    i = 0;
    while (n != 0)//anakhdo 5 exemple
    {
        tab[i] = n % 2;//exembple 5 % 2 =1;
        n /= 2;//n=5/2=(2);
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
    printf("%d", tab[j]);
    }
    return 0;
}