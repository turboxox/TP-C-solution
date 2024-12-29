#include <stdio.h>
int main()
{
    int taille;
    int i;
    int chercher;
    int trouve = 0;
    printf("entrer la taille de tableau :");
    scanf("%d", &taille);

    int arr[taille];
    for (i = 0; i < taille; i++)
    {
        printf("entrer le nombre %d de tableau :", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("entrer le nombre que tu cherche :");
    scanf("%d", &chercher);
    int indice = 0;
    for (i = 0; i < taille; i++)
    {
        if (arr[i] == chercher)
        {
            trouve = 1;
            indice = i;
        }
    }
    if (trouve != 0)
    {
        printf("l'indice est : %d\n", indice);
    }
    else
        printf("non\n");

    return 0;
}