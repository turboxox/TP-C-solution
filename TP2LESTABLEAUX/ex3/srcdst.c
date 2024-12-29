#include <stdio.h>
int main()
{
    int i;
    int tsrc[10];
    int tdst[10] = {0};
    for (i = 0; i < 10; i++)
    {
        printf("entrer le nombre %d de tsrc:", i + 1);
        scanf("%d", &tsrc[i]);
    }
    printf("tableau sourc :\n");
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, tsrc[i]);
    }
    int j =0;
    for (i = 0; i < 10; i++)
    {

        if (tsrc[i] >= 0)
        {
            tdst[j] = tsrc[i];
            j++;
        }
    }
    printf("tableau dest :\n");
    for (i = 0; i < 10; i++)
    {
        printf("arr[%d] = %d\n", i, tdst[i]);
    }
    return 0;
}