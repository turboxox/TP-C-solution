#include <stdio.h>
#include <stdlib.h>
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
void trie(char *str)
{
    int min_index;
    int i = 0;
    int j;
    int tmp;
    int taille = funstrlen(str);
    for (i = 0; i < taille - 1; i++)
    {
        min_index = i;
        for (j = i + 1; j < taille; j++)
        {
            if (str[j] < str[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            tmp = str[min_index];
            str[min_index] = str[i];
            str[i] = tmp;
        }
    }
}
int main()
{
    char str[] = "ismail";
    trie(str);
    printf("%s\n", str);
}