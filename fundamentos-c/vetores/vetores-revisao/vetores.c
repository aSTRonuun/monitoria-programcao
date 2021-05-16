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

    int maiores[size];
    int maiores_size = 0;

    for(int i=0;i<size-1;i++){
        if(vet[i] > vet[i+1]){
            maiores[maiores_size++] = vet[i];
        }
    }

    show(vet, size);
    show(maiores, maiores_size);
}