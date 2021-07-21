#include <stdio.h>

int main(){

    int soma = 0;
    char nome[100];
    scanf("%[^\n]", nome);

    for(int i=0;nome[i];i++){
        soma += nome[i];
    }

    printf("%d\n", soma % 50);
}