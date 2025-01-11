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

char *reverse(char *str)
{
    int i;
    int taille = funstrlen(str);
    char *final = (char *)malloc((taille + 1) * sizeof(char));  

    for (i = 0; i < taille; i++)
    {
        final[i] = str[taille - i - 1];  
    }

    final[taille] = '\0';  
    return final;
}

int main()
{
    char str[] = "ismail";  
    char *final = reverse(str);  // Get the reversed string
    printf("%s\n", final);  // Print the reversed string
    free(final);  // Don't forget to free the allocated memory
}
