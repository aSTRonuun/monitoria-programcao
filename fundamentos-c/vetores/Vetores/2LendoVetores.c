#include <stdio.h>

int main(){

    //Lendo Terminal
    int size = 0;
    scanf("%d", &size);
    int vet[size];

    for(int i=0;i<size;i++){
        scanf("%d", &vet[i]);
    }

    for(int i=0;i<size;i++){
        printf("%d", &vet[i]);
    }
}