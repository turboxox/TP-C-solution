#include <stdio.h>

void bubble(int *tab, int taille)
{
    int i, j, tmp;
    for (i = 0; i < taille - 1; i++)
    {
        for (j = 0; j < taille - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                tmp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    int taille = 10;
    int tab[] = {9, 7, 5, 4, 6, 2, 0, 1, 3, 8};
    bubble(tab, taille);
    int i = 0;
    for (i = 0; i < taille; i++)
    {
        printf("%d\n", tab[i]);
    }
    return 0;
}