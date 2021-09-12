#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);

    int matriz[3][];
    int linhas[n];
    int colunas[n];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);

            linhas[i] += matriz[i][j];
            colunas[j] += matriz[i][j];
        }
    }

    
}