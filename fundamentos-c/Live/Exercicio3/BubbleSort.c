#include <stdio.h>
#define TAM 5

void imprimirVetor(int numeros[]){
    for(int i=0;i<TAM;i++){
        printf("%4d", numeros[i]);
    }
    printf("\n");
}

void ordenarCrescente(int numeros[]){
    int aux = 0;
    for(int contador = 1; contador < TAM; contador++){
        for(int i = 0; i < TAM - 1; i++){
            if(numeros[i] > numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
}

void ordenarDecresente(int numeros[]){
    int aux = 0;
    for(int contador = 1; contador < TAM; contador++){
        for(int i = 0; i < TAM - 1; i++){
            if(numeros[i] < numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
}

int main(){

    int numeros[TAM];

    printf("Entre com cinco numero para preencher o array:\n");
    for(int i=0;i<TAM;i++){
        scanf("%d", &numeros[i]);
    }

    printf("Ordem atual do itens no array:\n");
    imprimirVetor(numeros);
    
    //BubbleSort
    ordenarCrescente(numeros);
    imprimirVetor(numeros);

    ordenarDecresente(numeros);
    imprimirVetor(numeros);
}