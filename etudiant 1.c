#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 50 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct etudiant {
	char nom[10];
	char prenom[10];
	float note[3];
	float moyenne ;
	char mention[10];

	
}etudiant;
int main(int argc, char *argv[]) {
	etudiant etudiants[max] ;
	int i ;
	int nombre_etudiant ;
	int j ;
	float s;

	printf("entrez le nombre des etudiants");
	scanf("%d",&nombre_etudiant);
	
	for(i=0 ; i<nombre_etudiant ; i++){
	
	printf("entrez le nom de l etudiant %d  \n",i+1);
	scanf(" %s",&etudiants[i].nom);
	printf("entrez le prenom de l etudiant \n");
	scanf(" %s",&etudiants[i].prenom);
	s=0;
	for (j=0 ; j<3 ; j++){
		printf("entrez la %d note de l etudiant %d  : \n",j+1,i+1);
		scanf("%f",&etudiants[i].note[j]);
		s =s + etudiants[i].note[j] ;
		
	} 
	etudiants[i].moyenne = s/3 ;
	
	}

	
	
	for(i=0 ; i<nombre_etudiant ; i++){
		if(etudiants[i].moyenne <10){
			strcpy(etudiants[i].mention,"ajourné");
		}
		else if (etudiants[i].moyenne >=10 && etudiants[i].moyenne <12){
			strcpy(etudiants[i].mention,"passable");
		}
		else if (etudiants[i].moyenne >=12 && etudiants[i].moyenne <14){
			strcpy(etudiants[i].mention,"assez bien");
		}
		else if (etudiants[i].moyenne >=14 && etudiants[i].moyenne <16){
			strcpy(etudiants[i].mention,"bien");
		}
		else if (etudiants[i].moyenne >=16 && etudiants[i].moyenne <=20){
			strcpy(etudiants[i].mention,"tres bien");
		}
			
	
	
	} 
	 
	 for (i=0 ; i<nombre_etudiant ;i++){
	 	
	 	 printf("la note de l etudiant %s %s est : %.2f \n",etudiants[i].nom,etudiants[i].prenom,etudiants[i].moyenne);
		 printf("la mention de l etudiant %s %s est : %s \n",etudiants[i].nom,etudiants[i].prenom,etudiants[i].mention);
	 }
	
		
	
	return 0;
}
