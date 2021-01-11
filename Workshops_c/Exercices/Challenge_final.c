#include<stdio.h>

main(){

    printf("%d",echanger(10,20));
}

add(int a , int b){
    return a + b;
}

echanger(int a, int b){
    int c = a;
    a = b;
    b = c;
    return a,b;
}