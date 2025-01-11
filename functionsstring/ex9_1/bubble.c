#include <stdio.h>
int funstrlen(char *str)
{
    int i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}

void bubble(char *str)
{
    int i = 0;
    int j, min_index, tmp;
    int taille = funstrlen(str);
    for (i = 0; i < taille; i++)
    {
        for (j = 0; j < taille-i-1; j++)
        {
            if (str[j+1] < str[j])
            {
                tmp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = tmp;
            }
        }
    }
}
int main()
{
    char str[]="ismail";
    bubble(str);
    printf("%s\n", str);
}