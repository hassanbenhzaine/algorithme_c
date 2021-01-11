#include<stdio.h>

int num, rep;

main(){
    printf("Veuillez entrer un nombre!\n");    scanf("%d",&num);

    for(rep = 1; rep <= 10; rep++){
        printf(" %d x %d = %d\n",num, rep, num*rep);
    }

}