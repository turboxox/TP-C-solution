#include <stdio.h>

void afficherTableau(int tab[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d", tab[i]);
        if (i < taille - 1) 
        {
            printf(", "); 
        }
    }
    printf("\n"); 
}

int main()
{
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = 5;
    
    afficherTableau(tableau, taille);
    
    return 0;
}
