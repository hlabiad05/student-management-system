#include<stdio.h>
#include<stdlib.h>

void calcule_transposee(int a , int b , int m[a][b]);

int main (){
    int l , c ;
    printf("donner le nombre de ligne et de colonne \n");
    fflush(stdout);
    scanf("%d%d",&l,&c);
    int m[l][c];
    printf("donner les elements de la matrice \n");
    for (int i = 0 ; i < l ; i++){
        for (int j = 0 ; j < c ; j++){
            scanf("%d",&m[i][j]);
        }
    }
    calcule_transposee(l , c , m);
    return 0 ;
}

void calcule_transposee(int a , int b , int m[a][b]){
    int mt[b][a];
    for (int i = 0 ; i < a ; i++){
        for (int j = 0 ; j < b ; j++){
            mt[j][i] = m[i][j];
        }
    }
    printf("la matrice transposee est : \n");
    for (int i = 0 ; i < b ; i++){
        for (int j = 0 ; j < a ; j++){
            printf("%d ",mt[i][j]);
        }
        printf("\n");
    }
}