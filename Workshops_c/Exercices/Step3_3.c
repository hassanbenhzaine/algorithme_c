#include<stdio.h>


int PrintPyramyde(int a){
	void PrintSpace(int n){
		char space = 's';

		for(int i = 0; i < n; i++){

			int result = n - i;
			while(result > 1){
				printf("%c",space);
				result--;
			} 

         	void PrintStar(int n){

				char star = '*';
				int result2 = (i * 2)+1;
				while(result2 != n){
					printf("%c",star);
					result2--;
				} 
				printf("\n");

    		}

    		PrintStar(i);   
		} 

	}
	PrintSpace(a);

	return 1;
}

main(){
	printf("",PrintPyramyde(5));
}


