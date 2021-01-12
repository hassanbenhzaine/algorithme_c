#include<stdio.h>
#include<stdbool.h>

int num1,num2,num3,premier,num4;

/*
bool isPremier2(int num){
    divededby(,);
    return ;
} */

// Fonction qui retoune la division des deux valeurs
divededby(int n,int a){
    return n / a;
}

// Fonction pour l'addition des deux nombres a et b
add(int a , int b){
    return a + b;
}

// Fonction pour echanger les valeurs des deux nombres a et b
echanger(int a, int b){
    int c = a;
    a = b;
    b = c;
    printf("\n Le nouveaux etat des variables est\n A = %d\n B = %d",a,b);
}

// Fonction pour vérifier si un nombre il est premier ou non
bool isPremier(int num){

    // boucle "for" pour savoir si le nombre est premier ou non
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            premier = true;
        }
    }
    return premier;
}

main(){

    printf(" A = ");
    scanf("%d",&num1);
    printf(" B = ");
    scanf("%d",&num2);

    printf("\n L'addition de A + B = %d\n\n",add(num1,num2));
    printf(" L'etat initial des variables sont A = %d et B = %d\n",num1,num2);
    printf("",echanger(num1,num2));

    printf("\n\n Entrer un nombre a verifier si il est premier ou non!\n ");
    scanf("%d",&num3);
    if(isPremier(num3) == true){
        printf("\n %d n'est pas un nombre premier",num3);
    } else{
        printf("\n %d est un nombre premier",num3);
    }

}


    



