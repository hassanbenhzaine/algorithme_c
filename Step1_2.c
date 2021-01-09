#include<stdio.h>

int a,b;

main(){
    printf("Veulliez enter deux nombre entiers a et b\na : ");

    scanf("%d",&a);
    printf("b : ");
    scanf("%d",&b);

    printf("\na + b = %d\na - b = %d\na * b = %d\na / b = %d\na % b = %d",a+b, a-b, a*b, a/b, a%b);
}