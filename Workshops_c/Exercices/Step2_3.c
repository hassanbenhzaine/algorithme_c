#include<stdio.h>
#include<math.h>

float Delta, a, b, c;

main(){

    // Réception des coefficients a, b et c par l'utilisateur
    printf("Veuillez entrer les coefficients d'une equation du deuxieme degres (ax² + bx + c=0) a resoudre!\n a : ");
    scanf("%f",&a);
    printf(" b : ");
    scanf("%f",&b);
    printf(" c : ");
    scanf("%f",&c);
    
    // Calcule de Delta
    Delta = pow(b,2)-(4*a*c);

    // Sortie des resultats
    printf(" Delta = %.2f",Delta);

}
