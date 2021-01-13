#include<stdio.h>

main(){
	char nom[20], prenom[20], sex[20], age[20], numTel[20];

	
	printf("veuiller enter vos iformations personnel\n");
	
	printf("Nom : ");
	scanf(" %s",&nom);
	printf("Prenom : ");
	scanf(" %s",&prenom);
	printf("Age : ");
	scanf(" %s",&age);
	printf("Sex: ");
	scanf(" %s",&sex);
	printf("Numero telephone : ");
	scanf(" %s",&numTel);
	
	printf("%s %s, %s ans, je suis %s et mon numero telephone est %s\n",nom,prenom,age,sex,numTel);
	system("pause");
}

