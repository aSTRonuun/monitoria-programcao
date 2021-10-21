#include <stdio.h>
#define TAM 5

int main (){

    int numeros[TAM];
    int aux = 0;

    printf("Entre com 5 numeros para preencher o array:\n");
    for( int i = 0; i < TAM; i++){
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual dos itens no array:\n");
    for(int i = 0; i < TAM; i++){
        printf("%4d", numeros[i]);
    }

    // Algoritmo de ordenação Bubblesort:
    for(int contador = 1; contador < TAM; contador++){
        for(int i = 0; i < TAM - 1; i++){
            if(numeros[i] > numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }

    printf("\nElementos do array em ordem crescente: \n");
    for(int i = 0; i < TAM; i++){
        printf("%4d", numeros[i]);
    }
}