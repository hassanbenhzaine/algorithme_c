#include<stdio.h>
#include<stdbool.h>

int num;
bool premier;

main(){
    
    printf("Veuillez entrer un nombre\n");
    scanf("%d",&num);

    // boucle "for" pour savoir si le nombre est premier ou non
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            premier = true;
        }
    }
    
    if(premier == true){
        printf("\n%d n'est pas un nombre premier",num);
    } else{
        printf("\n%d est un nombre premier",num);
    }

}