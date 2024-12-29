#include <stdio.h>

int main()
{
    int n;
    printf("Entrer la taille du tableau: ");
    scanf("%d", &n);

    int tab[n];

    for (int i = 0; i < n; i++)
    {
        printf("Entrer l'élément %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    int somme = 0;
    float moyenne;
    int max = tab[0];
    int min = tab[0];
    for (int i = 0; i < n; i++)
    {
        somme = somme + tab[i];
        if (tab[i] > max)
        {
            max = tab[i];
        }
        if (tab[i] < min)
        {
            min = tab[i];
        }
        
    }

    moyenne = somme / n;

    printf("La somme est: %d\n", somme);
    printf("La moyenne est: %.2f\n", moyenne);
    printf("Le maximum est: %d\n", max);
    printf("le minimum est : %d\n", min);

    return 0;
}
