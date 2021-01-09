#include<stdio.h>
#include<math.h>

const float pi = M_PI;
float r, D, P, S;

main(){
    printf("Veuillez entrer le rayon du cercle a calculer\n");
    scanf("%f",&r);
    
    // Calculer le permietre du cercle
    P = 2 * pi * r;
    printf("Le permietre du cercle : %f\n", P);
    
    // Calculer le diamètre du cercle
    D = P / pi;
    printf("Le diamètre du cercle : %f\n", D);
    
    // Calculer la surface du cercle
    S = pi * pow(r,2);
    printf("La surface du cercle : %f\n", S);
}