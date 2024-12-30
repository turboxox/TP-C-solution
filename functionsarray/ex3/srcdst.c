#include <stdio.h>
#include <stdlib.h>
int *copy(int *Tsrc, int taille)
{
    int i = 0;
    int j = 0;
    int *Tdest = (int *)calloc(taille, sizeof(int));
    for (i = 0; i < taille; i++)
    {
        if (Tsrc[i] > 0)
        {
            Tdest[j] = Tsrc[i];
            j++;
        }
    }
    return Tdest;
}
int main()
{
    int taille = 5;
    int Tsrc[] = {1, -2, 3, -4, 5};
    int *Dest = NULL;
    Dest = copy(Tsrc, taille);
    int i;
    if(Dest = NULL)
    {
        return 1;
    }
    for (i = 0; i < taille; i++)
    {
        printf("%d\n", Dest[i]);
    }
    free(Dest);
    return 0;
}
