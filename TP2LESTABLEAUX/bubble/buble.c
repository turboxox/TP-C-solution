#include<stdio.h>
int main()
{
    int a;
    printf("entrer la taille de tableau : ");
    scanf("%d",&a);
    int i;
    int j;
    int tmp;

    int arr[a];
    for(i=0; i < a;i++)
    {
        printf("entrer le nombre %d de tableau : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Le tableau avant le trie\n");
    for(i=0; i < a;i++)
    {
        printf(" arr[%d]= %d ", i ,arr[i]);
    }
    printf("\n");

    // Bubble sort implementation
    for(i = 0; i < a-1; i++)
    {
        for(j = 0; j < a-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                // Swap elements
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    printf("Le tableau apres le trie\n");
    for(i=0; i < a;i++)
    {
        printf(" arr[%d]= %d ", i ,arr[i]);
    }
    printf("\n");

    return 0;
}