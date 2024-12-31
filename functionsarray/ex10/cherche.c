#include<stdio.h>

int function(int *tab, int taille,int entier)
{
    int i =0;
    for(i=0; i < taille;i++)
    {
        if(entier == tab[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int tab[]={1,0,7,0,3,0};
    int taille =6;
    int cherche = 9;
    printf("%d\n", function(tab,taille,cherche));
}