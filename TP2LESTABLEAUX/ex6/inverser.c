#include <stdio.h>
int main()
{
    int taille;
    int i;
    int tmp;
    printf("entrer la taille de tableau :");
    scanf("%d", &taille);

    int arr[taille];
    for (i = 0; i < taille; i++)
    {
        printf("entrer le nombre %d de tableau :", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("le tableau avant la transformation :\n");
    for (i = 0; i < taille; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    i=0;
    while (i < (taille / 2))
    {
        tmp = arr[taille - i - 1];
        arr[taille - i - 1] = arr[i];
        arr[i] = tmp;

        i++;
    }

    printf(" le tableau apres la transformation :\n");

    for (i = 0; i < taille; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}