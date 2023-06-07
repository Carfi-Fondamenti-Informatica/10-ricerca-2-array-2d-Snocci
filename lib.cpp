#include "lib.h"
#include <iostream>
using namespace std;

void init (char mat[], int n){
    for(int i=0;i<n;i++){
        mat[i]= ' ';
    }
}
void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}
void inserimento (char mat[], int n) {
    cin>> mat;
}
void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}

int ricerca(char nomi[][15],char cognomi[][15],char nome[],char cognome[] ) {
    for (int i=0; i<5; i++){
        if (nomi[i][15]==nome[15] && cognomi[i][15]==cognome[15]) {
            return i;
        }
    } return -1;
}

