#include <stdio.h>
int main()
{
    int i;
    int taiile;
    int indice;
    int inserer;
    printf("entrer la taille de tableau:");
    scanf("%d", &taiile);
    int arr[taiile+1];

    for (i = 0; i < taiile; i++)
    {
        printf("Entrer le nombre %d dans le tableau :", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("entrer votre indice :");
    scanf("%d", &indice);
    if(indice < 0 || indice > taiile)
    {
        printf("votre indice pas dans le tableau");
    }

    printf("entrer le nombre qui tu veux inserer:");
    scanf("%d", &inserer);

    for(i=taiile; i > indice; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[indice] = inserer;

    printf("\nLe tableau après le changement :\n");
    for (i = 0; i <= taiile; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
