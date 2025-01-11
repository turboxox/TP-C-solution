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

char *functi(char *ch1, char *ch2)
{
    int taille3 = funstrlen(*ch1 / 2) + funstrlen(*ch2 / 2);
    char *ch3 = (char *)malloc(taille3 * sizeof(char));
    int *ch4 = (char *)malloc(taille3 * sizeof(char));
    int taille1 =(funstrlen(ch1) / 2);
    int i ,j;
    for(i=0; i < taille1;i++)
    {
        ch3[i]=ch1[i];
    }
    
    int taille2=(funstrlen(ch2) / 2);
   
    for( j = funstrlen(ch2); j > taille2;j--)
    {
        ch3[i]=ch2[j];
    }
    return ch3;
}
int main()
{
    char ch1[]="ismail";
    char ch2[]="saad";
    char *ch3=functi(ch1,ch2);
    printf("%s\n", ch3);
}