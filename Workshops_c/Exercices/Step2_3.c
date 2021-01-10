#include<stdio.h>

int a, b;
char op;

main(){

    // Réception des deux nombres par l'utilisateur
    printf("Veuillez entrer deux nombres\nA : ");
    scanf("%d",&a);
    printf("B : ");
    scanf("%d",&b);

    // Taille en Octet et en Hexadecimal des deux nombres
    printf("%d = %ld Octets = 0x%x (Hexadecimal)\n",a,sizeof(a),a);
    printf("%d = %ld Octets = 0x%x (Hexadecimal)\n\n",b,sizeof(b),b);
    
    // Selection d'un operateur arithmetique
    printf("Choisissez un operateur arithmetique\n\n 1.Addition\n 2.Soustraction\n 3.Multiplication\n 4.Division\n 5.Module\n\n");
    scanf(" %c",&op);
    
    // Résultat selon l'operateur arithmetique choissi
    switch(op) {
        case '1'	:
            printf("La somme de %d et %d est: %d",a,b,a+b);
            break;
        case '2'	:
            printf("La difference de %d et %d est: %d",a,b,a-b);
            break;
        case '3'	:
            printf("Multiplication de %d et %d est: %d",a,b,a*b);
            break;
        case '4'	:
            if (b != 0){
                printf("Division de %d sur %d est: %d",a,b,a/b);
         }  else {
                printf("MATH ERROR!");
        }
            break;
        case '5':
            printf("Module de %d sur %d est: %d",a,b,a%b);
        break;
    }
    
}
