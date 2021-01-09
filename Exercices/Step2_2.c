#include <stdio.h>

float num1, num2;

int main() {
    
    printf("Veuillez enter deux nombre pour comparaison\nA : ");
    scanf("%f",&num1);
    printf("B : ");
    scanf("%f",&num2);
    
    printf("La taile de A est : %ld\n",sizeof(num1));
    printf("La taile de B est : %ld",sizeof(num2));
    
    return 0;
}
