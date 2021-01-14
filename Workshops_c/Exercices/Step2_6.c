#include<stdio.h>

int a, b, num1, num2, result;

main(){

    printf("Veuillez entrer deux entiers positifs!\n num1 : ");    scanf("%d",&num1);
    printf(" num2 : ");                                            scanf("%d",&num2);
    
	if (num1 > num2){
		a = num1;
		b = num2;
	} else{
		a = num2;
		b = num1;
	}
	
    while (b != 0){
	    if (b % 2 == 1){
			b--;
			result += a;
			printf("= %d * %d + %d\n",a,b,result);  
	         
	    } else{
			a *= 2;
			b /= 2;
	    	printf("= %d * %d + %d\n",a,b,result);  
	    }
    }
    
    printf("= %d",result);
}
