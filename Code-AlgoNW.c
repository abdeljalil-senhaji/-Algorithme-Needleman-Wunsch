// Declaration des bibliotheque de bases
#include <stdio.h>
#include <string.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

// Déclaration des methodes pour l'initialisation, remplissage et l'affichage de la matrice

void initialisation(char sequence1[],char sequence2 []);
void MatriceScore(char sequence1[],char sequence2 []);
void AfficheMatrice(char sequence1[],char sequence2 []);

// Déclaration d'un tableau M de deux dimention et 3 variables entier

int M[100][100];
int Gap; 
int Match;
int Missmatch;


// Methode Main pour demander a l'utilisateur d'entrer les deux séquences a aligner avec les 3valeur de gap, match et missmatch

int main(){

    char sequence1[100]; //premiere Sequence
    char sequence2[100]; //deuxieme Sequence
    printf("Enter la premiere sequence\n");
    scanf("%s",sequence1);
    printf("Enter la deuxieme sequence\n");
    scanf("%s",sequence2); 
    printf("Enter la valeur de Gap\n");
    scanf("%d",&Gap);
    printf("Enter la valeur de Match\n");
    scanf("%d",&Match);
    printf("Enter la valeur de Missmatch\n");
    scanf("%d",&Missmatch);

    initialisation(sequence1,sequence2);
    MatriceScore(sequence1,sequence2);
    AfficheMatrice(sequence1,sequence2);
    return 0;
}

//Etape 1: Initialisation de la matrice
//Appel de la methode d'initialisation
void initialisation(char sequence1[],char sequence2 []){

    int lengh1 = strlen(sequence1);
    int lengh2 = strlen(sequence2);
    M[0][0] = 0;
    for (int i = 0; i < lengh1 +  1; i++){

        M[i][0] = i == 0 ? 0 : M[i-1][0] + (Gap); 
    }

    for (int j = 0; j < lengh2 + 1; j++){

        M[0][j] = j == 0 ? 0 : M[0][j-1] + (Gap);
    }

}

//Etape 2: creation de score de la matrice
//Appel de la methode de remplissage des scores 

void MatriceScore(char sequence1[],char sequence2 []){
    int lengh1   = strlen(sequence1);
    int lengh2= strlen(sequence2);
    for (int i = 1; i < lengh1 + 1; i++)
    {
        for (int j = 1; j < lengh2 + 1; j++)
        {
            int scoreDiagonal = 0;

            if (sequence1[j - 1] == sequence2[i - 1]){
                scoreDiagonal = M[i - 1][j - 1] + Match;
            }
            else{
                scoreDiagonal = M[i - 1][j - 1] + Missmatch;
            }

            int scoreGauche = M[i][j - 1] + Gap;
            int scoreUp =  M[i - 1][j] + Gap;

            int maxScore = MAX(MAX(scoreDiagonal, scoreGauche), scoreUp);
            M[i][j] = maxScore;
        }
    }
}

//Etape 3: Methode d'affichage de la matrice
//Appel de la methode d'affichage de score
void AfficheMatrice(char sequence1[],char sequence2 []){
    int lengh1 = strlen(sequence1);
    int lengh2 = strlen(sequence2);
    for (int i = 0; i < lengh1 + 1; i++){
        printf("\n");
        for (int j = 0; j < lengh2 + 1; j++){
            printf("%d\t",M[i][j]);
        }

    }

}
