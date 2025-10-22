#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50 

typedef struct date {
	int jour;
	int mois;	
	int annee ;
}date;
typedef struct etudiant {
    char nom[10];
    char prenom[10];
    float note[3];
    float moyenne;
    char mention[10];
	date date_naiss;
} Etudiant;

int main() {
    Etudiant etudiants[MAX];
    int i, j, nombre_etudiant;
    float s;
	int j_rech, m_rech, a_rech;
	char nom_recherche[10];
    
    
    printf("\n=== GESTION DES ETUDIANTS ===\n\n");
    printf("Entrez le nombre des etudiants: ");
    scanf("%d", &nombre_etudiant);
    
    
    for(i = 0; i < nombre_etudiant; i++) {
        printf("\n--- Etudiant %d ---\n", i+1);
        printf("Nom: ");
        scanf("%s", etudiants[i].nom);
        printf("Prenom: ");
        scanf("%s", etudiants[i].prenom);
		do{
		printf("entrez la date de naissance de l etudiant %d sous la forme jour / mois / annee\n" ,i+1);
		scanf("%d %d %d",&etudiants[i].date_naiss.jour,&etudiants[i].date_naiss.mois,&etudiants[i].date_naiss.annee);
		}while( etudiants[i].date_naiss.jour <1 || etudiants[i].date_naiss.jour >31 || etudiants[i].date_naiss.mois <1 || etudiants[i].date_naiss.mois >12 || etudiants[i].date_naiss.annee <1900 || etudiants[i].date_naiss.annee >2009);
        s = 0;
    
    
        for(j = 0; j < 3; j++) {
            float note;
            do {
                printf("Note %d (entre 0 et 20): ", j+1);
                scanf("%f", &note);
                
                if(note < 0 || note > 20) {
                    printf("Erreur: La note doit être comprise entre 0 et 20!\n");
                }
            } while(note < 0 || note > 20);
            
            etudiants[i].note[j] = note;
            s += etudiants[i].note[j];
        }
        etudiants[i].moyenne = s/3;
	}

    for(i = 0; i < nombre_etudiant; i++) {
        if(etudiants[i].moyenne < 10)
            strcpy(etudiants[i].mention, "Ajourne");
        else if(etudiants[i].moyenne < 12)
            strcpy(etudiants[i].mention, "Passable");
        else if(etudiants[i].moyenne < 14)
            strcpy(etudiants[i].mention, "Assez bien");
        else if(etudiants[i].moyenne < 16)
            strcpy(etudiants[i].mention, "Bien");
        else
            strcpy(etudiants[i].mention, "Tres bien");
    }

int choix;

	printf("\n==== MENU ====\n");
	printf("1. Afficher les resultats\n");
	printf("2. rechercher un etudiant par nom\n");
	printf("3. rechercher un etudiant par date de naissance\n");
	printf("4. afficher les etudiants ajournes\n");
	printf("5. afficher les etudiants admis\n");
	printf("Choisissez une option: ");
	scanf("%d", &choix);

	switch(choix){
	case 1:{
	printf("\n=== RESULTATS ===\n");
	for(i = 0; i < nombre_etudiant; i++) {
		printf("\nEtudiant: %s %s\n", etudiants[i].nom, etudiants[i].prenom);
		printf("Moyenne: %.2f\n", etudiants[i].moyenne);
		printf("Mention: %s\n", etudiants[i].mention);
		printf("-------------------\n");
	} 
	break;
	}
	case 2:
		
		printf("Entrez le nom de l'etudiant a rechercher: ");
		scanf("%s", nom_recherche);	
		for(i=0; i<nombre_etudiant; i++){
			if (!strcmp(etudiants[i].nom, nom_recherche)) {
				printf("\nEtudiant trouve: %s %s\n", etudiants[i].nom, etudiants[i].prenom);
				printf("date de naissance: %d/%d/%d\n", etudiants[i].date_naiss.jour, etudiants[i].date_naiss.mois, etudiants[i].date_naiss.annee);
				printf("Moyenne: %.2f\n", etudiants[i].moyenne);
				printf("Mention: %s\n", etudiants[i].mention);
				
			}

		} 
		break;
	case 3:
		
		printf("Entrez la date de naissance a rechercher (jour mois annee): ");
		scanf("%d %d %d", &j_rech, &m_rech, &a_rech);
		for(i=0; i<nombre_etudiant; i++){
			if (etudiants[i].date_naiss.jour == j_rech && etudiants[i].date_naiss.mois == m_rech && etudiants[i].date_naiss.annee == a_rech) {
				printf("\nEtudiant trouve: %s %s\n", etudiants[i].nom, etudiants[i].prenom);
				printf("date de naissance: %d/%d/%d\n", etudiants[i].date_naiss.jour, etudiants[i].date_naiss.mois, etudiants[i].date_naiss.annee);
				printf("Moyenne: %.2f\n", etudiants[i].moyenne);
				printf("Mention: %s\n", etudiants[i].mention);
			} 
		}
		break;
	case 4:
		printf("\n=== ETUDIANTS AJOURNES ===\n");
		for(i = 0; i < nombre_etudiant; i++) {
			if(etudiants[i].moyenne < 10) {
				printf("\nEtudiant: %s %s\t", etudiants[i].nom, etudiants[i].prenom);
				printf("date de naissance: %d/%d/%d\t", etudiants[i].date_naiss.jour, etudiants[i].date_naiss.mois, etudiants[i].date_naiss.annee);
				printf("Moyenne: %.2f\t", etudiants[i].moyenne);
			}
		}
		break;
		case 5:
		printf("\n=== ETUDIANTS ADMIS ===\n");
		for(i = 0; i < nombre_etudiant; i++) {
			if(etudiants[i].moyenne >= 10) {
				printf("\nEtudiant: %s %s\t", etudiants[i].nom, etudiants[i].prenom);
				printf("date de naissance: %d/%d/%d\t", etudiants[i].date_naiss.jour, etudiants[i].date_naiss.mois, etudiants[i].date_naiss.annee);
				printf("Moyenne: %.2f\t", etudiants[i].moyenne);
			}
		}
		break;
	default:
		printf("Option invalide.\n");
		break;
	}
	system("pause");
	return 0;
	}