#include <stdio.h>
#include <stdlib.h>

int *insert_into_sorted_array(int *tab, int taille, int inserer)
{
    int i;
    int indice = 0;

    int *new_tab = (int *)malloc((taille + 1) * sizeof(int));
    if (new_tab == NULL)
    {
        printf("Erreur d'allocation mémoire !\n");
        return NULL;
    }

    while (indice < taille && tab[indice] < inserer)
    {
        indice++;
    }

    for (i = 0; i < indice; i++)
    {
        new_tab[i] = tab[i];
    }

    new_tab[indice] = inserer;

    for (i = indice; i < taille; i++)
    {
        new_tab[i + 1] = tab[i];
    }

    return new_tab;
}

int main()
{
    int tab[] = {1, 2, 4, 5, 6};
    int taille = sizeof(tab) / sizeof(tab[0]);
    int inserer = 3;

    int *new_tab = insert_into_sorted_array(tab, taille, inserer);
    if (new_tab != NULL)
    {
        for (int i = 0; i < taille + 1; i++)
        {
            printf("%d ", new_tab[i]);
        }
        printf("\n");

        free(new_tab);
    }

    return 0;
}
