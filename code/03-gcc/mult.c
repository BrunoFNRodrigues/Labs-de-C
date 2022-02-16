#include <stdio.h>

void num(int num1, int num2){
    if(num1 == 0 || num2 ==0){
        printf("Erro\n");
    }
    else if(num1%num2 == 0){
        printf("Multiplo!\n");
    }
    else{
        printf("Não!\n");
    }
}

int main(){
    int num1;
    int num2;


    while (num1!=0 || num2!=0){
        printf("Digite um número: ");
        scanf("%d", &num1);

        printf("Digite um número: ");
        scanf("%d", &num2);

        num(num1, num2);

    }


    
    return 0;

}

