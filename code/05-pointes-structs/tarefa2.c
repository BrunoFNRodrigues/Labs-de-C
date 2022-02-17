#include <stdio.h>

void retang(int num1, int num2, int *pperi, int *parea){
    *pperi = num1*2 + num2*2;
    *parea = num1 * num2;
}

int main(){
    int num1;
    int num2;

    int peri = 0;
    int area = 0;
    int *pperi = &peri;
    int *parea = &area;

    printf("Número 1: ");
    scanf("%d", &num1);
    printf("Número 2: ");
    scanf("%d", &num2);

    retang(num1, num2, pperi, parea);

    printf("Perímetro: %d\nÁrea: %d\n", peri, area);

    return 0;
}