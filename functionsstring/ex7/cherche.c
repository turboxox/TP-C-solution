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
int funcherche(char *str, char *c)
{
    int taille = funstrlen(str);
    int i = 0;
    int indice = -1;
    for (i = 0; i < taille; i++)
    {
        if (str[i] == *c)
        {
            indice = i;
            break;
        }
    }
    return indice;
}
int main()
{
    char *str = "ismlail";
    char *c = "l";

    printf("%d\n", funcherche(str, c));
    return 0;
}
/*int funstrlen(char *str)
{
    int i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return i;
}
int funcherche(char *str, char *c)
{
    int taille = funstrlen(str);
    int i = 0;
    int indice = -1;
    for (i = 0; i < taille; i++)
    {
        if (str[i] == *c)
        {
            indice = i;
        }
    }
    return indice;
}
int main()
{
    char *str = "ismail";
    char *c = "l";

    printf("%d\n", funcherche(str, c));j
    return 0;
}
*/