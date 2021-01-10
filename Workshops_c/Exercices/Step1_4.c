#include<stdio.h>

int entierPositif, compteur = -1;
float somme = 0, moyenne;

main(){
    
    while(entierPositif != -1){
        printf("Entrez un entier positif : ");
        scanf("%d",&entierPositif);
        somme += entierPositif;
        compteur++;
    }
    
    somme++;
    moyenne = somme / compteur;
    printf("La moyenne de ces 3 entiers vaut %f", moyenne);

}