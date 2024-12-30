#include <stdio.h>

void *selection(int *tab, int taille)
{
    int i = 0;
    int j = 0;
    int tmp;
    int min_index;
    for (i = 0; i < taille - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < taille; j++)
        {
            if (tab[min_index] > tab[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            tmp = tab[min_index];
            tab[min_index] = tab[i];
            tab[i] = tmp;
        }
    }
    return tab;
}
int main()
{
    int taille = 6;
    int tab[] = {5, 7, 2, 3, 4, 0};
    selection(tab, taille);
    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", tab[i]);
    }
    return 0;
}