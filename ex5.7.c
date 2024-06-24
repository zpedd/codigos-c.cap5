#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[3][2];
    int B[2][3];
    int C[3][3];

    //primeira matriz
    for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 2; j++){
            printf("array1[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    //segunda matriz
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("array2[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    //multip.
    for ( int i =0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            C[i][j] = 0;
            for (int k = 0; k < 2; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("A x B =\n");
    for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j< 3; j++){
            if(C[i][j] < 0){
                printf("%.2d", C[i][j]);    
            }else if( C[i][j] >= 0){
                printf("%.3d", C[i][j]);
            }
            if(j < 2){
                printf(" ");
            }
            
        }
        printf("\n");
    }


    return 0;

}