#include <stdio.h>

int main (){

    int n, anterior=1, atual=1, proximo;
    int soma = 0;

    scanf("%d", &n);

    while(1){

        proximo = atual + anterior;
        if(proximo % 2 == 0 && proximo < n){
            soma += proximo;
        }
        
        anterior = atual;
        atual = proximo;

        if(n < atual){
            break;
        }
    }

    printf("%d", soma);
}