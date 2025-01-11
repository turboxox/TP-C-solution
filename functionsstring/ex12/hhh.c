#include <stdio.h>
#include <stdlib.h>

int funstrlen(const char *str) 
{
    int i = 0;
    while (str[i] != '\0') 
    {
        i++;
    }
    return i;
}

char* supprimerCaractere(char *chaine, char caractere) 
{
    int longueur = funstrlen(chaine);
    char *resultat = (char *)malloc((longueur + 1) * sizeof(char));
    int j = 0;
    
    // Copier tous les caractères sauf celui à supprimer
    for (int i = 0; i < longueur; i++) 
    {
        if (chaine[i] != caractere) 
        {
            resultat[j] = chaine[i];
            j++;
        }
    }
    resultat[j] = '\0'; 
    
    return resultat;
}

int main() 
{
    char chaine[] = "Hello World!";
    char caractere = 'l';
    
    char *nouvelle_chaine = supprimerCaractere(chaine, caractere);
    printf("Chaîne originale : %s\n", chaine);
    printf("Chaîne après suppression de '%c' : %s\n", caractere, nouvelle_chaine);
    
    free(nouvelle_chaine); // Libérer la mémoire allouée
    return 0;
}
