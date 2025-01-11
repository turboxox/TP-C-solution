#include <stdio.h>
#include <stdlib.h>
int estPalandrom(char *str)
{
    char *p1 = str;
    int *p2;
    while (*p1 != '\0')
    {
        p1++;
    }
    p1--;
    for (p2 = str; p2 < p1; p2++, p1--)
    {
        if (*p1 != *p2)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char *str = "ismail";
    if (estPalandrom(str) == 1)
        printf("%s est palandrom", str);
    else
        printf("%s n'est pas un palandrom", str);
}