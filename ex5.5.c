#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array1[3][3];
    int det;

    for ( int i =0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            printf("array[%d][%d]: ", i, j);
            scanf("%d", &array1[i][j]);
        }
    }
    //det
    det =   array1[0][0] * (array1[1][1] * array1[2][2] - array1[1][2] * array1[2][1])
        -   array1[0][1] * (array1[1][0] * array1[2][2] - array1[1][2] * array1[2][0])
        +   array1[0][2] * (array1[1][0] * array1[2][1] - array1[1][1] * array1[2][0]);


    printf("\nDeterminante: %d\n", det);



    return 0;

}