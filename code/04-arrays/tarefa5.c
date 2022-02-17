#include <stdio.h>

int main() {
    long mat[5][4]={
    {2, 2, 2, 2},
    {2, 2, 2, 2},
    {2, 2, 2, 0},
    {2, 2, 0, 0},
    {2, 0, 0, 4}
    };
    
    int i;
    int j;
    int l = -1;
    int arr[2] = {0,0};
    for (i = 0; i<4; i++ ){
        int soma =0;
        for (j = 0; j<5; j++){
            soma += mat[j][i];
            if (mat[j][i] > l){
                l = mat[j][i];
                arr[0] = j;
                arr[1] = i;
            } 
        }
        printf("soma: %d \n", soma);
    }
    printf("maior: %d| Posição: %d, %d\n", l, arr[0]+1, arr[1]+1);
    return 0;
}