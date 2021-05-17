#include <stdio.h>

int find(int vet[], int size, int valor){
    for(int i=0;i<size;i++){
        if(vet[i]==valor)
            return i;
    }

    return -1;
}

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
    int procurado = 0;
    scanf("%d %d", &size, &procurado);
    int vet[size];
    for(int i=0;i<size;i++){
        scanf("%d", &vet[i]);
    }

    int pos = find(vet, size, procurado);
    if(pos == -1)
        puts("nao existe");
    else
        printf("%d\n", pos);

    show(vet, size);
}