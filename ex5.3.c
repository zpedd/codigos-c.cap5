#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array1[3][4];
    int array2[3][4];
    int numero;

    //preencher primeiro array
    for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 4; j++) {
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Multiplicar por: ");
    scanf("%d", &numero);

    //preencher segundo aray
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++){
            array2[i][j] = array1[i][j] * numero;
        }
    }
    printf("arrayMult:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            if(j == 3) {
                printf("%.3d", array2[i][j]);  
            }else {
                printf("%.3d ", array2[i][j]);
            }
            
        }
        printf("\n");
    }


    return 0;

}