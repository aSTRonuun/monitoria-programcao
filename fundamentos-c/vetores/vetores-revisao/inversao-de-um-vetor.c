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

    for(int i=0, j=size-1;i<j;i++,j--){
        int aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
    }

    show(vet, size);
}