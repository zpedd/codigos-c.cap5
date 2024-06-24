#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array1[2][2];
    int det;

    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("array[%d][%d]: ", i, j );
            scanf("%d", &array1[i][j]);
        }
    }


    det = array1[0][0] * array1[1][1] - array1[0][1] * array1[1][0];

    for (int i = 0; i < 2; i++){
        printf("[%d][%d]\n", array1[i][0], array1[i][1] );
    }
    printf("Determinante: %d\n", det);

    return 0;

}