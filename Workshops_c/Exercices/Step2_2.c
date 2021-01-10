#include <stdio.h>

int num1, num2;

main() {
    
    // Réception des deux nombres a comparer par l'utilisateur
    printf("Veuillez enter deux nombre pour comparaison\nA : ");
    scanf("%d",&num1);
    printf("B : ");
    scanf("%d",&num2);
    
    // Affichage des tailles des deux nombres en octets et hex
    printf("A(%d) = %ld octets\n        %x hexadecimal\n",num1, sizeof(num1), num1);
    printf("B(%d) = %ld octets\n        %x hexadecimal", num2, sizeof(num2), num2);
    
}
