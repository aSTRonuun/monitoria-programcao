#include <stdio.h>

void show(int vet[], int size){
    printf("[");
    for(int i=0;i<size;i++){ 
        if(i != 0)
            printf(", ");
        printf("%d", vet[i]);
    }
    printf("]\n");
}


int main(){

    int size = 0;
    scanf("%d", &size);
    int vet[size];
    for(int i=0;i<size;i++){
        scanf("%d", &vet[i]);
    }

    int geracao[size];

    for(int i=0;i<size;i++){
        if(vet[i]==0){
            geracao[i] = 0;
        }else if(i-1 >= 0 && vet[i-1] == 0){
            geracao[i] = 0;
        }else if(i+1 < size && vet[i+1] == 0){
            geracao[i] = 0;
        }else
            geracao[i] = vet[i];
    }

    show(vet, size);
    show(geracao, size);
}