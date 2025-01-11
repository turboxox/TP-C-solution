#include <stdio.h>
#include <stdlib.h>
int funstrlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
char *funstrcat(char *dest, char *src)
{
    int i = 0;
    char *final = (char *)malloc((funstrlen(dest) + funstrlen(src)) * sizeof(char));

    while (dest[i] != '\0')
    {
        final[i] = dest[i];
        i++;
    }
    int j = 0;
    while (src[j] != '\0')
    {
        final[i] = src[j];
        i++;
        j++;
    }
    final[i] = '\0';
    return final;
}
int main()
{
    char *src = " ismail";
    char *dest = "saad";
    char *final = funstrcat(dest, src);
    printf("%s\n", final);
    free(final);
}