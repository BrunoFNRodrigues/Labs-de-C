#include "../macros_correcoes.h"
#define LABNUM "lab2-"
#define SOLUTIONFILE "tarefa7.c"

#include <stdio.h>

// TODO implemente seu programa aqui

void arvore(int n){
    int espacos=0;
    for (int i=1; i<=n; i++){
        espacos = n-i;
        for (int k = 0; k<espacos; k++){
            printf(" ");
        } 
        for (int b=0; b<i-1; b++){
            printf("/");
        }
        printf("|");
        for (int a=0; a<i-1; a++){
            printf("\\");
        }
        printf("\n");
    }
}

int main() {
    arvore(5);

    return 0;
}