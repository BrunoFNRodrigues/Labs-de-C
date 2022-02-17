#include <stdio.h>

double soma(double arr[], int n){
    if(n < 1){
        return 0;
    }

    double s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    return s;
}

double var(double arr[], int n){
    double med = soma(arr, n);
    med = med/n;
    double var = 0;
    int i = 0;
    while (i < n){
        var += (arr[i] - med)*(arr[i] - med);
        i++;
    }
    return var/n;

}

int main() {
    double lista[100];
    int n;
    int i = 0;

    printf("digite um número: \n");
    scanf("%d", &n);

    while (i < n){
        double num;
        printf("Adicione um número ao array: \n");
        scanf("%lf", &num);
        lista[i] = num;
        ++i;
    }
    printf("Soma: %f\n",soma(lista, n));
    printf("Variância: %f\n",var(lista, n));

    return 0;
}