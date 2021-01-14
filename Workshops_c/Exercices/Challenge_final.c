#include<stdio.h>
#include<stdbool.h>

int num1,num2,num3,premier,num4,num5;


// Boolean qui controle si le nombre est premier en retoune true, sinon on retourne false
bool controller(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
	        return true;
	    }
	}
	return false;
} 

// Fonction qui retoune la division des deux valeurs
divededby(int n,int a){
	num5 = n/a;
	return num5;
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
    int i;
    for(i = 2; i < num; i++){
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
    
    // Echanger les valeurs de A et B
    printf("",echanger(num1,num2));

	// Resultat de la fonction controller si la devision des deux nombre A et B est premier ou pas
    printf("\n\n Entrer deux un nombre a verifier si il est premier ou non!\n A : ");
    scanf("%d",&num3);
    printf(" B : ");
    scanf("%d",&num4);
    if(controller(divededby(num3,num4)) == true){
        printf("\n %d n'est pas un nombre premier",num5);
    } else{
        printf("\n %d est un nombre premier",num5);
    } 

}


    



