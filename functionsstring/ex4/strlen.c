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
int main()
{
    char *str = "ismail";
    printf("%d\n", funstrlen(str));
}