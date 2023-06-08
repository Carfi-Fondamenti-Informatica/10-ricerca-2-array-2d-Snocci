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
void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}
void inserimento (char mat[], int n) {
    char x[n*10];
    init(x,n*10);
    for (int i=0;i<(n*10);i++){
        mat[i]=x[n*10];
    }
    cin>> x;
    for(int i=0;i<n;i++){
        mat[i]=x[i];
    }
}


int ricerca(char nomi[][15],char cognomi[][15],char nome[],char cognome[] ) {
    for (int i=0; i<5; i++){
        int j=0;
        for (j=0;j<15;j++){
            if(cognomi[i][j]!=cognome[i]){
                break;}
            if(nomi[i][j]!=nome[i]){
                break;}
        } 
        if (j==15){
                return i;}
        }
    
        return -1;
}

