#include <stdio.h>
int main()
{
    int i;
    int taiile;
    int inserer;
    int indice;
    printf("entrer la taille de tableau:");
    scanf("%d", &taiile);

    int arr[taiile + 1];

    printf("entrer un tableau trie dans l'ordre croissant \n");

    for (i = 0; i < taiile; i++)
    {
        printf("Entrer le nombre %d dans le tableau :", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("entrer le nombre qui tu veux inserer:");
    scanf("%d", &inserer);

    for (i = 0; i < taiile; i++)
    {
        if (inserer >= arr[i])
        {
            indice = i;
        }
    }
    indice += 1;

    for (i = taiile; i > indice; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[indice] = inserer;

    printf("\nLe tableau après le changement :\n");
    for (i = 0; i <= taiile; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
