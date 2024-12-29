#include <stdio.h>
int main()
{
    int i;
    int arr[100];
    for (i = 0; i < 100; i++)
    {
        arr[i] = i;
        printf("%d", arr[i]);
        if ( i < 99 && (i+1) % 10 != 0)
        {
            printf(",");
        }
        if (i < 99 && (i+1) % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
