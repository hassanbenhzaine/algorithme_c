#include<stdio.h>

main(){
	char nom[20];
	char prenom[20];
	char sex[20];
	int age;
	long numTel;

	
	printf("veuiller enter vos iformations perosnnel\n");
	
	printf("Nom : ");
	scanf(" %s",&nom);
	printf("Prenom : ");
	scanf(" %s",&prenom);
	printf("Age : ");
	scanf(" %d",&age);
	printf("Sex: ");
	scanf(" %s",&sex);
	printf("Numero telephone : ");
	scanf(" %d",&numTel);
	
	printf("%s %s, %d ans, je suis %s et mon numero telephone est %d",nom,prenom,age,sex,numTel);
	system("pause");
}

