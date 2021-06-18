#include <stdio.h>

void show(int vet[], int size){
    for(int i=0;i<size;i++){
        printf("%d\n", vet[i]);
    }
    size = 100;
}

int main(){

    int size = 0;
    scanf("%d", &size);
    int vet[size];

    for(int i=0;i<size;i++){
        scanf("%d", &vet[i]);
    }
    show(vet, size);
    printf("%d", size);
}