#include <stdio.h>
#include <stdlib.h>

int *func_inserer(int *tab, int taille, int indice, int inserer)
{
    int i = 0;
    if (indice < 0 || indice > taille)
    {
        printf("Indice invalide !\n");
        return NULL;
    }

    int *nouveau_tab = malloc((taille + 1) * sizeof(int));
    if (nouveau_tab == NULL)
    {
        printf("Erreur d'allocation mémoire !\n");
        return NULL;
    }

    for (i = 0; i < indice; i++)
    {
        nouveau_tab[i] = tab[i];
    }

    nouveau_tab[indice] = inserer;

    for (i = indice; i < taille; i++)
    {
        nouveau_tab[i + 1] = tab[i];
    }

    return nouveau_tab;
}

int main()
{
    int tab[] = {2, 7, 3, 2, 1};
    int taille = 5;
    int indice = 3;
    int insere = 0;

    int *nouveau_tab = func_inserer(tab, taille, indice, insere);

    if (nouveau_tab != NULL)
    {
        for (int i = 0; i < taille + 1; i++)
        {
            printf("%d ", nouveau_tab[i]);
        }
        printf("\n");

        free(nouveau_tab);
    }

    return 0;
}
