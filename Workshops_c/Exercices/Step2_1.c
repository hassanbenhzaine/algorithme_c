#include<stdio.h>

// Macro de comparaison 
#define MAX(a,b) (a > b)

// Macro boolean vrai ou faux
#define vrai 1
#define faux !vrai

float num1, num2;

main()
{
    
    // Réception des deux nombres a comparer par l'utilisateur
    printf("Veuillez enter deux nombre pour comparaison\nA : ");
    scanf("%f",&num1);
    printf("B : ");
    scanf("%f",&num2);
    
    // Comparaison des deux nombres et affichage du résultat
    if (MAX(num1,num2) == vrai){
        printf("%f est supérieur a %f", num1, num2);
    }
    if (MAX(num1,num2) == faux){
        printf("%f est inferieur a %f", num1, num2);
    }

}