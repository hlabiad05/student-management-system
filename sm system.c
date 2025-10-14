#include <stdlib.h>
#include <stdio.h>  
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
struct date_naissance {
    int jour;
    int mois;
    int annee;
};
struct etudient {
    char nom[50];
    char prenom[50];
    int age;
    struct date_naissance date;
    float notes[5];    
    float moyenne;
    int edentifiant;
};
int main() {

    int choix;
    do {
        printf("\n===== Menu Principal =====\n");
        printf("1. Ajouter un étudiant\n");
        printf("2. Afficher les étudiants\n");
        printf("3. Rechercher un étudiant\n");
        printf("4. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:

            printf("entrez le nom de l'etudient: ");
            scanf("%s", etudient.nom);
            printf("entrez le prenom de l'etudient: ");
            scanf("%s", etudient.prenom);
            printf("entrez l'age de l'etudient: ");
            scanf("%d", &etudient.age);
            printf("entrez la date de naissance de l'etudient (jj mm aaaa): ");
            scanf("%d %d %d", &etudient.date.jour, &etudient.date.mois, &etudient.date.annee);
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
               
                break;
            default:
                
        }
    } while (choix != 4);
    
    return 0;
}