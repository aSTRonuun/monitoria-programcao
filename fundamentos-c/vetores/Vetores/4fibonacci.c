#include <stdio.h>
#include <stdbool.h>

int calcularSomaPar(int vet[], int size,int valor_max, int soma){
        while(true){
        vet[size] = vet[size - 1] + vet[size -2];
        if(vet[size] > valor_max){
            return soma;
        }
        if(vet[size] % 2 == 0){
            soma += vet[size];
        }else{
            soma += 0;
        }
        size += 1;
    }
}

int main(){

    //Resolvendo de Vetores
    int vet[100] = {1, 1};
    int size = 2;
    int valor_max = 0;
    int soma = 0;

    scanf("%d", &valor_max);

    soma = calcularSomaPar(vet, size, valor_max, soma);
    
    printf("%d\n", soma);
}