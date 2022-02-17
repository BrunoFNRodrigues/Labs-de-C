#include <stdio.h>

void sum_sub(int a, int b, int *psum, int *psub){
    *psum = a + b;
    *psub = a - b;
}

int main(){
    int a;
    int b;
    int sum;
    int sub;
    int *psum = &sum;
    int *psub = &sub;

    printf("Número a: ");
    scanf("%d", &a);
    printf("Número b: ");
    scanf("%d", &b);

    sum_sub(a, b, psum, psub);

    printf("Soma: %d\nSubtração: %d\n", sum, sub);
    
}