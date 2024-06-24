#include <stdio.h>
#include <stdlib.h>

int main (void){

    int tamanho;

    while (1){
        printf("Numero entre 1 e 100: ");
        scanf("%d", &tamanho);

        if (tamanho < 1 || tamanho > 100) {
            printf("Numero incorreto!\n");
            break;
        }

        int coluna;
        int linha;
        int iniMatriz;
        int fimMatriz;
        int elemento;

        //declaracao de matriz de tamanho variado;
        int m[tamanho][tamanho];

        iniMatriz = 0;
        fimMatriz = tamanho;
        elemento = 1;

        while(1){
            //preenche matrizes de tamanho menor cada vez que o ngc reinicia
            for (linha = iniMatriz; linha < fimMatriz; linha++){
                for (coluna = iniMatriz; coluna < fimMatriz; coluna++){
                    m[linha][coluna] = elemento;
                }
            }
            if (fimMatriz == 0)
                break;

            fimMatriz--;
            iniMatriz++;
            elemento++;
        }

        //imprime a matriz
        for (linha = 0; linha < tamanho; linha++){
            for (coluna = 0; coluna < tamanho; coluna++){
                if (coluna == 0){
                    printf("%3d", m[linha][coluna]);
                }else{
                    printf(" %3d", m[linha][coluna]);
                }
            }
            printf("\n");
        }

        printf("\n");
        break;
    }

    return 0;
}