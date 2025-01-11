#include <stdio.h>
#include <stdlib.h>

int funcmaji(char *str)
{
    int i = 0;
    int maj = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            maj++;
        }
        i++;
    }
    return maj;
}
int funcmin(char *str)
{
    int i = 0;
    int min = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            min++;
        }
        i++;
    }
    return min;
}
int funnbr(char *str)
{
    int i = 0;
    int nbr = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            nbr++;
        }
        i++;
    }
    return nbr;
}
int main()
{
    char str[] = {"iSMil120"};
    printf("%d\n", funcmaji(str));
    printf("%d\n", funcmin(str));
    printf("%d\n",funnbr(str));
}