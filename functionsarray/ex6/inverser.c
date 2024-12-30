#include <stdio.h>
void inverser(int *tab, int taille)
{
    int i = 0;
    int tmp;
    for (i = 0; i < taille / 2; i++)
    {
        tmp = tab[taille - i - 1];
        tab[taille - i - 1] = tab[i];
        tab[i] = tmp;
    }
}
int main()
{
    int taille = 6;
    int tab[] = {1, 2, 3, 4, 5, 6};
    inverser(tab, taille);
    for (int i = 0; i < taille; i++)
    {
        printf("%d | ", tab[i]);
    }
    return 0;
}