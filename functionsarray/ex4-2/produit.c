#include <stdio.h>
#include <stdlib.h>
int produit(int tab[], int taille)
{
    int i = 0;
    int produit = 1;
    for (i = 0; i < taille; i++)
    {
        produit *= tab[i];
    }
    return produit;
}
int main()
{
    int taille = 6;
    int tab[] = {9, 8, 7, 6, 5, 4};
    int result;
    result = produit(tab, taille);
    printf("%d\n", result);
    return 0;
}