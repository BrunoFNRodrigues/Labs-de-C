#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;

// TODO: declare função manhattan aqui. Veja abaixo como ela será usada

int manhattan(ponto p1, ponto p2){
    int deltax = (p1.x- p2.x)*(p1.x- p2.x);
    int deltay = (p1.y- p2.y)*(p1.y- p2.y);
    int soma = deltax + deltay;
    return sqrt(soma);
}

int main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int soma;
    ponto p1;
    ponto p2;

    printf("Número X1: ");
    scanf("%d", &num1);

    printf("Número Y1: ");
    scanf("%d", &num2);

    printf("Número X2: ");
    scanf("%d", &num3);

    printf("Número Y2: ");
    scanf("%d", &num4);

    p1.x = num1;
    p1.y = num2;
    p2.x = num3;
    p2.y = num4;

    soma = manhattan(p1, p2);

    printf("Distância: %d\n", soma);

}