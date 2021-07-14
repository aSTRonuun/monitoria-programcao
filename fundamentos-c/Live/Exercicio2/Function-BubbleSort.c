#include <stdio.h>
#define TAM 10

void imprimirVetor(int numeros[]){
    for(int i = 0; i < TAM; i++){
        printf("%d ", numeros[i]);
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


void ordenarDecrescent(int numeros[]){
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


int main (){

    int numeros[TAM];

    printf("Entre com dez números para preencher o array:\n");
    for(int i=0;i<TAM;i++){
        scanf("%d", &numeros[i]);
    }
    
    imprimirVetor(numeros);

    //ordernar array de forma crescente
    ordenarCrescente(numeros);

    printf("Imprimir vetor em ordem crescente\n");
    imprimirVetor(numeros);

    //ordenar array de forma decrescent
    ordenarDecrescent(numeros);

    printf("Imprimir vetor em ordem decresente\n");
    imprimirVetor(numeros);
}