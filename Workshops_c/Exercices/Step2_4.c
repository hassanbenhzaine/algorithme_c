#include<stdio.h>

int dividende,diviseur = 1,reste = 1,i = 1;

main(){
	int resultA,resultB;
	
    // Réception des deux nombers a calculer leur pgcd
    printf("Veuillez entrer deux nombres a calculer leur pgcd!\n A : ");
    scanf("%d",&dividende);
	resultA = dividende;
    printf(" B : ");
    scanf("%d",&diviseur);
    resultB = diviseur;
    printf("\npgcd(%d,%d) =>\n",dividende,diviseur);

    // Boucle "while" pour calcule pgcd jusqu'à avoir un diviseur de 0 et un reste de 0
    while(diviseur != 0 && reste != 0){
        reste = dividende % diviseur;
        printf("Step %d : %d = %d * %d + %d\n",i++, dividende, diviseur, dividende / diviseur, reste);
        dividende = diviseur;
        diviseur = reste;
    }
    
    printf("\nLe pgcd des nombres %d et %d : %d",resultA,resultB,dividende);

}
