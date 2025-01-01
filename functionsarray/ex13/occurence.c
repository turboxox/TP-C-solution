#include <stdio.h>
#include <stdlib.h>
int calc_occ(int *tab, int taille, int valeur)
{
    int i = 0;
    int count =0;
    for (i = 0; i < taille; i++)
    {
        if (valeur == tab[i])
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int tab[] = {1, 2, 3, 4, 5, 3, 7, 8, 9};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int chercher;
    printf("entrer la valaur que tu cherhce:");
    scanf("%d", &chercher);

    printf("%d\n", calc_occ(tab, taille, chercher));
    return 0;
}