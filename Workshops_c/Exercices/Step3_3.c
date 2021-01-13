#include<stdio.h>


int PrintPyramyde(int a){
	
	// Fonction pour affichier les espaces
	void PrintSpace(int n){
		char space = ' ';

		for(int i = 0; i < n; i++){

			int result = n - i;
			while(result > 1){
				printf("%c",space);
				result--;
			} 

			// Fonction pour affichier les étoiles dans la meme ligne avant de passer a la ligne suivant
         	void PrintStar(int n){

				char star = '*';
				
				int result2 = (i * 2)+1;
				while(result2 != n){
					printf("%c",star);
					result2--;
				} 
				
				int result3 = (i * 2)+1;
				while(result3 != n+1){
					printf("%c",star);
					result3--;
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


