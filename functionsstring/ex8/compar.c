#include <stdio.h>

int funcmp(char chaine1[], char chaine2[])
{
    int i = 0;
    while (chaine1[i] != '\0' && chaine2[i] != '\0')
    {
        if (chaine1[i] > chaine2[i])
        {
            return -1;  
        }
        else if (chaine1[i] < chaine2[i])
        {
            return 1;   
        }
        i++;
    }

    if (chaine1[i] == '\0' && chaine2[i] == '\0')
    {
        return 0;   
    }
    else if (chaine1[i] == '\0')
    {
        return 1;   
    }
    else
    {
        return -1;   
    }
}

int main()
{
    char *str1 = "ismalopk";
    char *str2 = "ismailsaad2005";
    printf("%d\n", funcmp(str1, str2));  
    return 0;
}
