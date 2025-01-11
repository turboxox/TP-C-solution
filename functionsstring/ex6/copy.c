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
char *funcopy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
int main()
{
    char *src = "ismail";
    char *dest = (char *)malloc((funstrlen(src + 1) * sizeof(char)));
    funcopy(dest, src);
    printf("%s\n", dest);
}