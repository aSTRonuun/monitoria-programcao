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

    int invertido[size];
    int invertido_size = 0;

    for(int i=size-1;i<=0;i--){
        invertido[invertido_size++] = vet[i];
    }

    show(vet, size);
    show(invertido, size);
}