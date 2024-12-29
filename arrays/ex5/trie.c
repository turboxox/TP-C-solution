#include <stdio.h>
int main()
{
    int taille;
    int i;
    int j;
    int tmp;

    printf("entrer la taille de tableau:");
    scanf("%d", &taille);

    int arr[taille];
    for (i = 0; i < taille; i++)
    {
        printf("entrer le nombre %d de tableau:", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Le tableau avant la transformation :\n");
    for (i = 0; i < taille; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
//the main code ***********************************************************************************************************************************
    for (i = 0; i < taille - 1; i++)
    {
        int min_index = i;
        for (j = i + 1; j < taille; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            tmp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = tmp;
        }
    }

    printf("Le tableau apres la transformation :\n");

    for (i = 0; i < taille; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}