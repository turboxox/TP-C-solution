#include <stdio.h>
#include <stdlib.h>
int somme(int tab[], int taille)
{
    int i = 0;
    int somme = 0;
    for (i = 0; i < taille; i++)
    {
        somme += tab[i];
    }
    return somme;
}
int main()
{
    int taille = 6;
    int tab[] = {9, 8, 7, 6, 5, 4};
    int result;
    result = somme(tab, taille);
    printf("%d\n", result);
    return 0;
}