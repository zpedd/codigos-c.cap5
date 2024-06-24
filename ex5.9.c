#include <stdio.h>
#include <stdlib.h>

int main (void){

    int tamanho;
    int linha;
    int coluna;

    while (1){

        printf("Numero entre 1 e 100: ");
        scanf("%d", &tamanho);

        // Verifica se o valor ta dentro do intervalo valido
        if (tamanho < 1 || tamanho > 100){
            printf("Numero incorreto!\n");
            break; // encerra o programa
        }

        int matriz[tamanho][tamanho];

        for(linha = 0; linha < tamanho; linha++){
            for(coluna = 0; coluna < tamanho; coluna++){
                if (linha == coluna){
                    matriz[linha][coluna] = 1;
                }
                if (linha < coluna){
                    matriz[linha][coluna] = coluna - linha + 1;
                }
                if (linha > coluna){
                    matriz[linha][coluna] = linha - coluna + 1;
                }
            }
        }
        //imprime a matriz
        for (linha = 0; linha < tamanho; linha++){
            for (coluna = 0; coluna < tamanho; coluna++){
                if (coluna == 0){
                    printf("%3d", matriz[linha][coluna]);
                }else{
                    printf(" %3d", matriz[linha][coluna]);
                }
            }
            printf("\n");
        }
        printf("\n");
        break;
    }

    return 0;
}