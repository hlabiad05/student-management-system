#include <stdio.h>
#include <stdlib.h>
#define max 50 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct etudiant {
	char nom[10];
	char prenom[10];
	float note[3];
	float moyenne ;
	
}etudiant;
int main(int argc, char *argv[]) {
	etudiant etudiants[max] ;
	int i ;
	int ne ;
	int j ;
	float s=0 ;
	printf("entrez le nombre des etudiants");
	scanf("%d",&ne);
	
	for(i=0 ; i<ne ; i++){
	
	printf("entrez le nom de l etudiant %d  \n",i+1);
	scanf(" %s",&etudiants[i].nom);
	printf("entrez le prenom de l etudiant \n");
	scanf(" %s",&etudiants[i].prenom);
	
	for (j=0 ; j<3 ; j++){
		printf("entrez la %d note de l etudiant %d  : \n",j+1,i+1);
		scanf("%f",&etudiants[i].note[j]);
		s =s + etudiants[i].note[j] ;
		
	} 
	etudiants[i].moyenne = s/3 ;
	
	}
	
	
	 
	 for (i=0 ; i<ne ;i++){
	 	
	 	 printf("la note de l etudiant %s %s est : %2f \n",etudiants[i].nom,etudiants[i].prenom,etudiants[i].moyenne);
	 }
	
		
	
	return 0;
}
