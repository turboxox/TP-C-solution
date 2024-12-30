#include <stdio.h>
#include <stdlib.h>
int functionmax(int tab[], int taille)
{
    int i = 0;
    int max = tab[0];
    int indice = 0;
    for (i = 0; i < taille; i++)
    {
        if (tab[i] > max)
        {
            max = tab[i];
            indice = i;
        }
    }
    return indice;
}
int main()
{
    int taille = 6;
    int tab[] = {90, 87, 17, 68, 95, 4};
    int indice;
    indice = functionmax(tab, taille);
    printf("%d\n", indice);
    return 0;
}