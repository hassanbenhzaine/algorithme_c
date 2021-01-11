#include<stdio.h>

int a, b;

main(){

    printf("Veuillez entrer deux entiers positifs!\n a : ");    scanf("%d",&a);
    printf(" b : ");                                            scanf("%d",&b);

    // if condition pour savoir si b est pair ou inpair
    if (b % 2 == 0 && b != 0){

        // si b est impair
        printf(" %d * %d = %d \n",a,b,a * (b-1) + 1);          

    } else{

        // si b est pair et different de 0
        printf(" %d * %d = %d \n",a,b,(2 * a * b) /2);      

    }
  
}