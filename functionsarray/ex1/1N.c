#include <stdio.h>
#include <stdlib.h>

int *tableau(int n)
{
    int *tab;
    int i;
    
    tab = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        tab[i] = i + 1;
    }
    return tab;
}

int main()
{
    int *tab = NULL;
    int i;
    int n = 7;  
    
    tab = tableau(n);
    
    printf("Le tableau contient: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    free(tab);  
    return 0;
}
