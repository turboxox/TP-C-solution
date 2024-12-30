#include <stdio.h>
#include <stdlib.h>
int recherche(int *tab, int taille, int entier)
{
    int i = 0;
    int indice = -1;
    for (i = 0; i < taille; i++)
    {
        if (entier == tab[i])
        {
            indice = i;
        }
    }

    return indice;
}
int main()
{
    int tab[] = {9, 8, 7, 6, 5, 9, 3};
    int taille = 7;
    int entier = 9;
    int result = recherche(tab, taille, entier);
    printf("%d\n", result);
}