/*

La difference entre :

    int main()
    {
        return 0;
    }

et :

    int main(int argc,char const **argv)

est que :

"int argc" est une variable de type entier,
qui stocke le nombre d'arguments entrant lorsque nous exécutons notre programme depuis une ligne de commande et
"arcgc" signifie "arguments counter".

"char const **argv" est une variable de type caractère,
qui stocke les arguments que nous venons de mentionner avant et
"argv" signifie "arguments vector" (vecteur ç'est une chaîne de caractère).

*/

// Example
#include<stdio.h>

main(int argc, char const **argv){

    // Compteur d'arguments
    printf("\nVous avez entrer %d arguments dans le terminal\n\n",argc-1);

    // Liste des arguments saisis
    printf("Les arguments sont :\n");
    int i;
    for(i = 0; i < argc; i++){
        if (i != 0){
            printf(" %s\n",argv[i]);
        }
    }
    
	system("pause");
}
