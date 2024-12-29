#include <stdio.h>
int main()
{
    int i;
    int taille;
    int occurrence;
    int N = 0;
    printf("entrer la taille de tableau :");
    scanf("%d", &taille);

    int arr[taille];

    for (i = 0; i < taille; i++)
    {
        printf("entrer le nombre %d de tableau:", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("entrer le valeur que tu cherche:");
    scanf("%d", &occurrence);

    i = 0;
    while (i < taille)
    {
        if (occurrence == arr[i])
        {
            N++;
        }
        i++;
    }

    printf("occurrence est %d", N);
}