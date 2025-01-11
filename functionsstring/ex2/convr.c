#include <stdio.h>
#include <stdlib.h>
void majtomin(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
    }
}
void mintomaj(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        i++;
    }
}
int main()
{
    char *str = NULL;
    int n;
    printf("entrer le nombre de char:");
    scanf("%d", &n);
    str = (char *)malloc((n + 1) * sizeof(char));
    printf("Entrer ta phrase: ");
    scanf("%s", str);

    majtomin(str);
    printf("La chaîne en minuscule : %s\n", str);

    mintomaj(str);
    printf("La chaîne en MAJUSCULE : %s\n", str);

    free(str);
    return 0;
}